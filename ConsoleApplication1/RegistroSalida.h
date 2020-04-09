#pragma once
#include "Bus.h"
#include "Sede.h"
#include <string>
using namespace std;
class CRegistroSalida {
	CSede* sedeOrigen;
	CSede* sedeDestino;
	CBus*  objBus;
	int cantPasajeros;
	int	fecha;
public:
	CRegistroSalida();
	~CRegistroSalida();
	CRegistroSalida(CSede* sedeOrigen, CSede* sedeDestino, CBus* objBus, int cantPasajeros, int fecha);
	CSede* getSedeOrigen();
	CSede* getSedeDestino();
	CBus*  getObjBus();
	int getCantPasajeros();
	int getFecha();
	void setSedeOrigen();
	void setSedeDestino();
	void setObjBus();
	void setCantPasajeros();
	void setFecha();
};
CRegistroSalida::CRegistroSalida() {}
CRegistroSalida::~CRegistroSalida() {}
CRegistroSalida::CRegistroSalida(CSede* sedeOrigen, CSede* sedeDestino, CBus* objBus, int cantPasajeros, int fecha) {
	this->sedeOrigen = sedeOrigen;
	this->sedeDestino = sedeDestino;
	this->objBus = objBus;
	this->cantPasajeros = cantPasajeros;
	this->fecha = fecha;
}
CSede* CRegistroSalida::getSedeOrigen()  { return sedeOrigen; }
CSede* CRegistroSalida::getSedeDestino() { return sedeDestino; }
CBus*  CRegistroSalida::getObjBus()      { return objBus; }
int CRegistroSalida::getCantPasajeros()  { return cantPasajeros; }
int CRegistroSalida::getFecha()          { return fecha; }
void CRegistroSalida::setSedeOrigen()    { this->sedeOrigen = sedeOrigen; }
void CRegistroSalida::setSedeDestino()   { this->sedeDestino = sedeDestino; }
void CRegistroSalida::setObjBus()        { this->objBus = objBus; }
void CRegistroSalida::setCantPasajeros() { this->cantPasajeros = cantPasajeros; }
void CRegistroSalida::setFecha()         { this->fecha = fecha; }