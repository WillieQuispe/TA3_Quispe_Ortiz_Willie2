#include "stdafx.h"
#include "AgenteSeguridad.h"
#include <iostream>
#include <time.h>
using namespace System;
void imprimirReportes(vector<CRegistroSalida*> vecReportes) {
	cout << "Sede Origen\tSede Destino\tCantidad" << endl;
	for (short i = 0; i < vecReportes.size(); i++) {
		if (i % 5 == 0)
		{
			cout << "dia" << (i / 5) + 1<<endl;
		}
		cout << vecReportes.at(i)->getSedeOrigen()->getNombreSede() << "\t\t" <<
			vecReportes.at(i)->getSedeDestino()->getNombreSede() << "\t" <<
			vecReportes.at(i)->getCantPasajeros() << endl;
		
	}
}
void main() {
	srand(time(0));
	CAgenteSeguridad* objAgente = new CAgenteSeguridad("Juan", "12345678");
	vector<CSede*> arrSedes;
	/*CREANDO SEDES*/
	arrSedes.push_back(new CSede("Villa", "Lejos1"));
	arrSedes.push_back(new CSede("Monterrico", "Lejos2"));
	arrSedes.push_back(new CSede("SanMiguel", "Escardo"));
	arrSedes.push_back(new CSede("SanIsidro", "Salaverry"));

	/*CREANDO BUSES*/
	vector<CBus*> arrBuses;
	arrBuses.push_back(new CBus("Bus1", rand()));
	arrBuses.push_back(new CBus("Bus2", rand()));
	arrBuses.push_back(new CBus("Bus3", rand()));
	arrBuses.push_back(new CBus("Bus4", rand()));

	for (int semana = 0; semana < 4; semana++) {
		for (int dia = 0; dia < 6; dia++) {
			int aux = 5;
		
			for (short i = 0; i < aux; i++) {
				objAgente->agregarRegistro(new CRegistroSalida(arrSedes.at(0), arrSedes.at(rand() % 3 + 1),
					arrBuses.at(rand() % 4), rand() % 50, semana * 10 + dia));
			}
		}
	}

	/*REPORTE DE TODAS LAS SALIDAS*/
	cout << "-----------------------------REPORTE-----------------------------" << endl;
	imprimirReportes(objAgente->getArrCompleto());
	
	system("pause>0");

	system("cls");
	int sumarTodo = 0; //suma todos los pasajeros del mes
	for (int semana = 0; semana < 4; semana++) {
		cout << "semana" << semana+1 << endl;
		for (int dia = 0; dia < 6; dia++) {
			int cant = 0; //cantidad de pasajeros
			
			for (short i = 0; i < objAgente->tamanio(); i++) {
				if (objAgente->getnElemento(i)->getFecha() == semana * 10 + dia)
					cant += objAgente->getnElemento(i)->getCantPasajeros();
				sumarTodo += objAgente->getnElemento(i)->getCantPasajeros();
			}
			cout << "Hay " << cant << " pasajeros el dia " << dia + 1 << " de la semana " << semana + 1 << endl;
		}
	}
	cout << endl;
	cout << "La recaudacion mensual es " << sumarTodo * 2.5 << " soles" << endl; //2.5=costo de pasaje
	int gastoGasolina = 0;
	for (short i = 0; i < objAgente->tamanio(); i++) {
		if (objAgente->getnElemento(i)->getSedeDestino()->getNombreSede() == "SanIsidro")
			gastoGasolina += 60; //Villa-San Isidro
		else if (objAgente->getnElemento(i)->getSedeDestino()->getNombreSede() == "San Miguel")
			gastoGasolina += 70; //Villa-San Miguel
		else
			gastoGasolina += 50; //Villa-Monterrico
	}
	cout << endl;
	cout << "El consumo de gasolina es " << gastoGasolina << " soles" << endl;

	system("pause>0");
}