#ifndef LISTALOCALES_H_INCLUDED
#define LISTALOCALES_H_INCLUDED
#include "local.h"

typedef struct Nodo{
	Local dato;
	Nodo *siguiente;
};

//CONSTRUCTOR
void Constructor(Nodo &lista, Local &dato);

//DESTRUCTOR
void Destructor(Nodo &lista);

//Getters y Setters
Local getDato(Nodo &lista);
void setDato(Nodo &lista, Local &dato);

Nodo getSiguiente(Nodo &lista);
void setDato(Nodo &lista, Nodo *siguiente);

//METODOS
void insertarLista(Nodo *&lista, int n);
void mostrarLista(Nodo *lista);






#endif // LISTALOCALES_H_INCLUDED
