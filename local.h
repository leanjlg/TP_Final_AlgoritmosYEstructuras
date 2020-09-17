#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED

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

/*
    NOTAS:
    Fijarse si CABA se considera provincia
    Fijarse si esta bien el struct y el constructor
    Buscar como trabajar con el enum
*/

enum tProvincia {Buenos Aires, CABA, Catamarca, Chaco, Chubut, Cordoba, Corrientes, Entre Rios, Formosa, Jujuy, La Pampa, La Rioja, Mendoza, Misiones, Neuquen, Rio Negro, Salta, San Juan, San Luis, Santa Cruz, Santa Fe, Santiago del Estero, Tierra del Fuego, Tucuman};

//ATRIBUTOS
typedef struct{

    int codigoSucursal;
	tProvincia provincia;
	int cantidadArticulos;
	float monto;
	float metros;
	int casaMatriz;

}Local;



//CONSTRUCTOR
Local* crearLocal();

Local* crearLocal(int codigoSucursal, tProvincia provincia, int cantidadArticulos, float monto, float metros, int casaMatriz);

//DESTRUCTOR
void destruirLocal(Local *local);



//GETTERS Y SETTERS
int getCodigoSucursal(Local *local);
void setCodigoSucursal(Local *local,int codigoSucursal);

tProvincia getProvincia(Local *local);
void setProvincia(Local *local, tProvincia provincia);

int getCantidadArticulos(Local *local);
void setCantidadArticulos(Local *local, int cantidadArticulos);

float getMonto(Local *local);
void setMonto(Local *local, float monto);

float getMetros(Local *local);
void setMetros(Local *local, float metros);

int getCasaMatriz(Local *local);
void setCasaMatriz(Local *local, int casaMatriz);

/********************************************************************************************************************************/

//M�TODOS
void mostrarLocal(Local *local);


#endif // LOCAL_H_INCLUDED
