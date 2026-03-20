/*
Ejercicio 1: Conversión de temperatura
Autor: Pavel Ganchala
Fecha: 08 de marzo de 2026
*/

#include <iostream>
using namespace std;

int main(){
    //Declarar e incializar
    double celsius = 0, resultado = 0;

    //Leer entradas
    cout << "*****BIENVENIDO ***** " <<endl;
    cout << "Ingrese la temperatura en Celsuis: " << endl;
    cin >> celsius;

    //Proceso
    resultado = (celsius * 9/5) + 32;

    //Mostrar salidas
    cout << "El resultado en Fahrenheit es: " << resultado << endl;

    return 0;
}