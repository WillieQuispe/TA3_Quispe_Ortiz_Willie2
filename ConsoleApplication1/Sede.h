#pragma once
#include <string>
using namespace std;
class CSede {
	string nombreSede;
	string direccion;
public:
	CSede();
	~CSede();
	CSede(string nombreSede, string direccion);
	string getNombreSede();
	string getDireccion();
	void setNombreSede(string nombreSede);
	void setDireccion(string direccion);
};
CSede::CSede() {}
CSede::~CSede() {}
CSede::CSede(string nombreSede, string direccion) {
	this->nombreSede = nombreSede;
	this->direccion = direccion;
}
string CSede::getNombreSede() { return nombreSede; }
string CSede::getDireccion() { return direccion; }
void CSede::setNombreSede(string nombreSede) { this->nombreSede = nombreSede; }
void CSede::setDireccion(string direccion) { this->direccion = direccion; }