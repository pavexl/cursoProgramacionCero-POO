/*
Aqui quiero que se quede con esta idea:
    El ARREGLO guarda los datos
    el INDICE nos dice en que posicion estamos.
    el FOR nos ayuda a movernos para todas las posiciones


============================ Plantilla General ================================

#include <iostream>
using namespace std;

int main(){
    /Declaro el arreglo
    int datos[5] // Arreglo de 5 enteros
    int i;       // variable para recorrer las posiciones

    / Cargar o Ingresar datos en el arreglo
    for(i = 0; i < 5; i++ ){  //Si no quiero que vaya avanzando de uno en uno, pongo esto: i+=2 -> avanza de 2 en 2, i+=3 -> avanza de 3 en 3
        cin >> datos[i];
    }

    / Impresion de datos del arreglo
    for (i = 0; i < 5; i++){
        cout << datos[i] << endl;
    }

    return 0;
}


Aqui tenemos varias cosas importantes:

    int datos[5];
    significa que estamos creando un arreglo de 5 espacios para guardar enteros.

    datos[0], datos[1], datos[2]...
    son las posiciones del arreglo

    El for empieza en i = 0 porque en C++ el primer indice siempre es 0.

    Mientras i < 5, seguimos recorriendo el arreglo.

    - En la carga usamos cin >> datos[i] porque vamos guardando un valor en cada posicion.

    - En la impresion usamos cout << datos[i]; porque vamos mostrando el valor guardado en cada posicion.


*/