#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "local.h"

/********************************************************************************************************************************/
/*
    ATRIBUTOS:
    codigoSucursal
    provincia
    cantidadArticulos
    monto
    metros
    casaMatriz

    AXIOMAS:
    codigoSucursal > 0
    provincia (Buscar que poner por default)
    cantidadArticulos => 0
    monto >= 0
    metros > 0
    casaMatriz (codigoSucursal del local desde que se maneja todo)
*/
/********************************************************************************************************************************/

struct Local(

    int codigoSucursal;
	tProvincia provincia;
	int cantidadArticulos;
	float monto;
	float metros;
	int casaMatriz;
);

//Constructores
//Constructor para que el usuario pueda crear locales
Local* crearLocal(){

    Local* local = new Local;
    setCodigoSucursal(local, 1);
    setProvincia(local, 1);
    setCantidadArticulos(local, 1);
    setMonto(local, 0);
    setMetros(local, 1);
    setCasaMatriz(local, 1);

    return local;
}

//Constructor para crear locales cuando se lee el archivo
Local* crearLocal(int codigoSucursal, tProvincia provincia, int cantidadArticulos, float monto, float metros, int casaMatriz){

    Local* local = new Local;
    setCodigoSucursal(local, codigoSucursal);
    setProvincia(local, provincia);
    setCantidadArticulos(local, cantidadArticulos);
    setMonto(local, monto);
    setMetros(local, metros);
    setCasaMatriz(local, casaMatriz);

    return local;
}

//Destructor
void destruirLocal(Local *local){
    delete local;
}


//Getters y Setters
int getCodigoSucursal(Local *local){
    return local.codigoSucursal;
}
void setCodigoSucursal(Local *local,int codigoSucursal){
    if(codigoSucursal > 0) local.codigoSucursal = codigoSucursal;
}


tProvincia getProvincia(Local *local){
    return local.provincia;
}
void setProvincia(Local *local, tProvincia provincia){
    local.provincia = provincia;
}


int getCantidadArticulos(Local *local){
    return local.cantidadArticulos;
}
void setCantidadArticulos(Local *local, int cantidadArticulos){
    if(cantidadArticulos >= 0) local.cantidadArticulos = cantidadArticulos;
}


float getMonto(Local *local){
    return local.monto;
}
void setMonto(Local *local, float monto){
    if(monto >= 0) local.monto = monto;
}


float getMetros(Local *local){
    return local.metros;
}
void setMetros(Local *local, float metros){
    if(metros > 0) local.metros = metros;
}


int getCasaMatriz(Local *local){
    return local.casaMatriz;
}
void setCasaMatriz(Local *local, int casaMatriz){
    if(casaMatriz > 0) local.casaMatriz = casaMatriz;
}

/********************************************************************************************************************************/

//Métodos

void mostrarLocal(Local *local){
    cout << "Codigo sucursal: " << getCodigoSucursal() << endl;
    cout << "Provincia: " << getProvincia() << endl;
    cout << "Cantidad Articulos: " << getCantidadArticulos() << endl;
    cout << "Monto: " << getMonto() << endl;
    cout << "Metros: " << getMetros() << endl;
    cout << "Casa Matriz: " << getCasaMatriz() << endl;
}
