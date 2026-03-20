/*
Ejercicio 3: Descuento por edad
Autor: Pavel Ganchala
Fecha: 08 de marzo de 2026
*/

#include <iostream>
using namespace std;

int main(){
    int edad = 0;
    double precio = 0;
    
    cout << "***** BIENVENIDO ***** " <<endl;
    cout << "Ingrese la edad: " << endl;
    cin >> edad;

    if (edad < 0)
    {
        cout << "Dato invalido" << endl;
    } else if (edad >= 18){
        precio = 5;
    }else{
        precio = 2.5;
    }

    cout << "El precio final es: " << precio << endl;

    return 0;
}

