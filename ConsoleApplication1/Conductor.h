#pragma once
#include <string>
using namespace std;
class CConductor {
	string nombre;
	string dni;
public:
	CConductor();
	~CConductor();
	CConductor(string nombre, string dni);
	string getNombre();
	string getDni();
	void   setNombre(string nombre);
	void   setDni(string dni);
};
CConductor::CConductor() {}
CConductor::~CConductor() {}
CConductor::CConductor(string nombre, string dni) {
	this->nombre = nombre;
	this->dni = dni;
}
string CConductor::getNombre() { return nombre; }
string CConductor::getDni() { return dni; }
void   CConductor::setNombre(string nombre) { this->nombre = nombre; }
void   CConductor::setDni(string dni) { this->dni = dni; }	