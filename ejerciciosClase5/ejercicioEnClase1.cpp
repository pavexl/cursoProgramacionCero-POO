/*
Ejercicio 1
Autor: Pavel Ganchala
Fecha: 06 de marzo de 2026
Enunciado: Suma de dos enteros (I/O). Pida dos numeros enteros y muestre la suma de dichos numeros.
*/

#include <iostream>
using namespace std;

int main(){
    //Declarar e incializar
    int num1 = 0, num2 = 0, suma = 0;

    //Entrada de datos
    cout << "*****BIENVENIDOS AL PROGRAMA***** " <<endl;
    cout << "Ingrese el primer numero: " << endl;
    cin >> num1;

    cout << "Ingrese el segundo numero: " << endl;
    cin >> num2;

    //Proceso
    suma = num1 + num2;

    //Resultado 
    cout << "El resultado es: " << suma << endl;

    return 0;
}