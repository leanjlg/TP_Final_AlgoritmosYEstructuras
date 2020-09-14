#ifndef LOCAL_H_INCLUDED
#define LOCAL_H_INCLUDED

enum tProvincia {Buenos Aires, CABA, Catamarca, Chaco, Chubut, Cordoba, Corrientes, Entre Rios, Formosa, Jujuy, La Pampa, La Rioja, Mendoza, Misiones, Neuquen, Rio Negro, Salta, San Juan, San Luis, Santa Cruz, Santa Fe, Santiago del Estero, Tierra del Fuego, Tucuman};

//ATRIBUTOS
typedef struct Local{

    //CONSTRUCTOR
    Local(int iCodigoSucursal, tProvincia iProvincia, int iCantidadArticulos, float iMonto, float iMetros, int iCasaMatriz) {
        codigoSucursal = iCodigoSucursal;
        provincia = iProvincia;
        cantidadArticulos = iCantidadArticulos;
        monto = iMonto;
        metros = iMetros;
        casaMatriz = iCasaMatriz;
    }

    //DESTRUCTOR
    ~Local()
    {
    }

	int codigoSucursal;
	tProvincia provincia;
	int cantidadArticulos;
	float monto;
	float metros;
	int casaMatriz;
};

//Getters y Setters

int getCodigoSucursal(Local &local);
void setCodigoSucursal(Local &local,int codigoSucursal);

tProvincia getProvincia(Local &local);
void setProvincia(Local &local, tProvincia provincia);

int getCantidadArticulos(Local &local);
void setCantidadArticulos(Local &local, int cantidadArticulos);

float getMonto(Local &local);
void setMonto(Local &local, float monto);

float getMetros(Local &local);
void setMetros(Local &local, float metros);

int getCasaMatriz(Local &local);
void setCasaMatriz(Local &local, int casaMatriz);


//METODOS





#endif // LOCAL_H_INCLUDED
