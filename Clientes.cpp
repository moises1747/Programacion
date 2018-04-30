#include "Clientes.h"
#include <iostream>
#include <string.h>	

using namespace std;

//SE DEBE CREAR SIEMPRE LOS METODOS QUE SE COLOQUEN EN EL .H

Clientes::Clientes()
{
	strcpy(nombre ,"");
	strcpy(apellido ,"");
}
Clientes::Clientes(char * _nombre, char * _apellido)
{
	strcpy(nombre, _nombre);
	strcpy(apellido, _apellido);
}

void Clientes::mostrarDatos()
{
	cout<<"Moises "<<nombre;
	cout<<endl<<"Leal "<<apellido<<endl;
}
