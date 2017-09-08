// NodoClass.cpp: define el punto de entrada de la aplicación de consola.
// Angelica Cervantes A01410524
//Estructura de Datos
//Actividad1 Parcial2

#include "stdafx.h"

class nodoClass {

public:
	nodoClass(int n, nodoClass *siguiente = NULL) {
		valor = n;
		siguiente = siguiente;
	}

private:
	int valor;
	nodoClass *siguiente;

};

