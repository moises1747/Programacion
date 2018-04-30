#ifndef CLIENTES_H
#define CLIENTES_H
#include <string.h>
#include <iostream>
class Clientes
{
	private:
		int x;
		char nombre[50];
		char apellido[50];
	public:
		int y;
		Clientes();
		Clientes(char * _nombre, char * _apellido);
		void mostrarDatos();
	protected:
		int z;
};

#endif
