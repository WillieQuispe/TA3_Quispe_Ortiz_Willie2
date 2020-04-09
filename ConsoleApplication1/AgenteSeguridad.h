#pragma once
#include <vector>
#include "RegistroSalida.h"
using namespace std;
class CAgenteSeguridad {
	string nombre;
	string dni;
	vector<CRegistroSalida*> vecRegistros;
public:
	CAgenteSeguridad();
	~CAgenteSeguridad();
	CAgenteSeguridad(string nombre, string dni);
	string getNombre();
	string getDni();
	void setNombre(string nombre);
	void setDni(string dni);
	void agregarRegistro(CRegistroSalida* aux);
	CRegistroSalida* getnElemento(int pos);
	int tamanio();
	void eliminarRegistro(int pos);
	vector<CRegistroSalida*> getArrCompleto();
};
CAgenteSeguridad::CAgenteSeguridad() {}
CAgenteSeguridad::~CAgenteSeguridad() {}
CAgenteSeguridad::CAgenteSeguridad(string nombre, string dni) {
	this->nombre = nombre;
	this->dni = dni;
}
string CAgenteSeguridad::getNombre() { return nombre; }
string CAgenteSeguridad::getDni() { return dni; }
void CAgenteSeguridad::setNombre(string nombre) { this->nombre = nombre; }
void CAgenteSeguridad::setDni(string dni) { this->dni = dni; }
void CAgenteSeguridad::agregarRegistro(CRegistroSalida* aux) {
	vecRegistros.push_back(aux);
}
CRegistroSalida* CAgenteSeguridad::getnElemento(int pos) {
	return vecRegistros.at(pos);
}
int CAgenteSeguridad::tamanio() { return vecRegistros.size(); }
void CAgenteSeguridad::eliminarRegistro(int pos) {
	vecRegistros.erase(vecRegistros.begin() + pos - 1);
}
vector<CRegistroSalida*> CAgenteSeguridad::getArrCompleto() {
	return vecRegistros;
}