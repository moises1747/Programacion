#ifndef GERENTE_H
#define GERENTE_H

#include "Clientes.h"

class Gerente : public Clientes
{
	int a;
	public:
		int b;
		Gerente();
		void probar();
	protected:
		int c;
};

#endif
