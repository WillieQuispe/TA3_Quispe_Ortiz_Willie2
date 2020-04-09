#pragma once
#include "Conductor.h"
#include <string>
using namespace std;
class CBus {
	string placa;
	int kilometraje;
	CConductor* objConductor;
public:
	CBus();
	~CBus();
	CBus(string placa, int kilometraje);
	string getPlaca();
	int    getKilometraje();
	CConductor* getObjConductor();
	void setPlaca(string placa);
	void setKilometraje(int kilometraje);
	void setObjConductor(CConductor* objConductor);
	void removerConductor();
};
CBus::CBus() {}
CBus::~CBus() {}
CBus::CBus(string placa, int kilometraje) {
	this->placa = placa;
	this->kilometraje = kilometraje;
	this->objConductor = nullptr;
}
string CBus::getPlaca() { return placa; }
int CBus::getKilometraje() { return kilometraje; }
CConductor* CBus::getObjConductor() { return objConductor; }
void CBus::setPlaca(string placa) { this->placa = placa; }
void CBus::setKilometraje(int kilometraje) { this->kilometraje = kilometraje; }
void CBus::setObjConductor(CConductor* objConductor) { this->objConductor = objConductor; }
void CBus::removerConductor() { objConductor = nullptr; }
