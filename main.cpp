#include <iostream>
#include <string.h>
#include "local.h"

using namespace std;

int main()
{
    cout << "Hola" << endl;
/*
    //ESTO EN CASO DE QUE QUERAMOS QUE EL USUARIO META DATOS Y NO SOLO A TRAVES DEL ARCHIVO

    //El usuario crearía un local
    crearLocal(); //Este local va a tener valores por default hasta que el usuario meta los datos

    cout << "Diga el codigo de la sucursal" << endl;
    cout << "Elija la provincia" << endl;
    cout << "Indique cantidad de articulos a la venta" << endl;
    cout << "Monto obtenido" << endl;
    cout << "Indique en metros cuadrados el tamaño del local" << endl;


    //Falta los "cin"
*/

    FILE *archivo1; //Crea archivo
    archivo1 = fopen("registroLocales.txt","r"); //Abre archivo para leerlo
    char aux[100];

    while(!feof(archivo1) ){ //Mientras no se llegue al fin del archivo
        fgets(aux, 100, archivo1);
        //La intrucción "fgets" lee todo lo que hay hasta que se encuentra un \n o se queda sin espacio
        //Lo que se lee se guarda en aux
        //Se indica que lea un máximo de hasta 100 caracteres (esto esta mal porque el tamaño tendría que ser justo de la cantidad que se lee, de lo contrario sobra o falta espacio)
        //El ultimo parametro de fgets indica de donde se lee
    }

    fclose(archivo1); //Cierro archivo





    int desde = 0;
    for(int i=0; strlen(aux); i++){ //Recorro todo el string en donde se guardaron los datos
    //Optimizar esto que es horrible a los ojos

        char auxCodigoSucursal[i-desde];
        int codigoSucursal;
        char auxProvincia[i-desde];
        char auxCantidadArticulos[i-desde];
        int cantidadArticulos;
        char auxMonto[i-desde];
        float monto;
        char auxMetros[i-desde];
        float metros;
        char auxCasaMatriz[i-desde];
        int casaMatriz;

        if(aux[i] == '-'){          //Indico en donde se separan los datos

            for(desde; i; desde++){
                int x = 0;
                auxCodigoSucursal[x] == aux[desde];
                x++;
            }
            desde = i;

            codigoSucursal = atoi(auxCodigoSucursal);
        }


        if(aux[i] == '-'){

            for(desde; i; desde++){
                int x = 0;
                auxProvincia[x] == aux[desde];
                x++;
            }
            desde = i;
        }


        if(aux[i] == '-'){

            for(desde; i; desde++){
                int x = 0;
                auxCantidadArticulos[x] == aux[desde];
                x++;
            }
            desde = i;

            cantidadArticulos = atoi(auxCantidadArticulos);
        }


        if(aux[i] == '-'){

            for(desde; i; desde++){
                int x = 0;
                auxMonto[x] == aux[desde];
                x++;
            }
            desde = i;

            monto = atof(auxMonto);
        }


        if(aux[i] == '-'){

            for(desde; i; desde++){
                int x = 0;
                auxMetros[x] == aux[desde];
                x++;
            }
            desde = i;

            metros = atof (auxMonto);
        }


        if(aux[i] == '-'){          //Indico en donde se separan los datos

            for(desde; i; desde++){
                int x = 0;
                auxCasaMatriz[x] == aux[desde];
                x++;
            }
            desde = i;

            casaMatriz = atoi(auxCasaMatriz);
        }

        //Aca se supone que se empiezan a repetir las variables
        mostrarLocal(crearLocal(codigoSucursal,auxProvincia,cantidadArticulos,monto,metros,casaMatriz) );
    }


    return 0;
}
