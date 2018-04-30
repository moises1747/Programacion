#include <iostream>
#include <string.h>
#include "Clientes.h"
#include "Gerente.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	//Clientes **c = new Clientes*[20];//deme un arreglo de 20 punteros que van a tener clientes.
	int cantClientes=0;	
	
	Gerente g;

	g.b=30;
	g.y=4;
	
	cout<<"Ingrese la cantidad de clientes";
	cin>>cantClientes;
	
	Clientes **c = new Clientes*[cantClientes];
	
	for(int i=0; i<cantClientes; i++)
	{
		c[i]=new Clientes(); //METODO POR DEFECTO... si agrego algo en el Cliente.cpp... saldra aqui!
		c[i]->mostrarDatos();
		cout<<"=================="<<endl;
		delete c[i]; //Eliminarlo de una vez...
	}
	
	//delete[] c; //ESTO NO SIRVE
	/*
	+c[0] = new Cliente();
	c[1] = new Cliente();
	c[2] = new Cliente();
	c[3] = new Cliente();
	
	c[0]->mostrarDatos();
	c[4]->mostrarDatos();
	*/
	return 0;
}
