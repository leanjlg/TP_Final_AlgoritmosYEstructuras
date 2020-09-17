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
        fgets((aux, 100, archivo1);
        //La intrucción "fgets" lee todo lo que hay hasta que se encuentra un \n o se queda sin espacio
        //Lo que se lee se guarda en aux
        //Se indica que lea un máximo de hasta 100 caracteres (esto esta mal porque el tamaño tendría que ser justo de la cantidad que se lee, de lo contrario sobra o falta espacio)
        //El ultimo parametro de fgets indica de donde se lee
    }

    fclose(archivo1); //Cierro archivo





    int desde = 0;
    for(int i=0; strlen(aux); i++){ //Recorro todo el string en donde se guardaron los datos
    //Optimizar esto que es horrible a los ojos


        if(aux[i] == '-'){          //Indico en donde se separan los datos
            char auxCodigoSucursal[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxCodigoSucursal[x] == strcat(auxCodigoSucursal, aux[desde]);
                x++;
            }
            desde = i;

            int codigoSucursal = int(auxCodigoSucursal);
        }


        if(aux[i] == '-'){
            char auxProvincia[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxProvincia[x] == strcat(auxProvincia, aux[desde]);
                x++;
            }
            desde = i;
        }


        if(aux[i] == '-'){
            char auxCantidadArticulos[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxCantidadArticulos[x] == strcat(auxCantidadArticulos, aux[desde]);
                x++;
            }
            desde = i;

            int cantidadArticulos = int (auxCantidadArticulos);
        }


        if(aux[i] == '-'){
            char auxMonto[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxMonto[x] == strcat(auxMonto, aux[desde]);
                x++;
            }
            desde = i;

            float monto = atof(auxMonto);
        }


        if(aux[i] == '-'){
            char auxMetros[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxMetros[x] == strcat(auxMetros, aux[desde]);
                x++;
            }
            desde = i;

            int metros = atof (auxMonto);
        }


        if(aux[i] == '-'){          //Indico en donde se separan los datos
            char auxCasaMatriz[i-desde];

            for(desde; i; desde++){
                int x = 0;
                auxCasaMatriz[x] == strcat(auxCasaMatriz, aux[desde]);
                x++;
            }
            desde = i;

            int casaMatriz = int(auxCasaMatriz);
        }

        //Aca se supone que se empiezan a repetir las variables
    }


    return 0;
}
