/*
CLASE 9 - EJERCIO 1 PARA CORREGIR
Autor: Pavel Ganchala
Fecha: 16 de marzo de 2026

Enunciado:

Desarrollar un programa que solicite al usuario 4 notas, calcule el promedio y muestre si el estudiante:
Aprueba si el promedio es mayor o igual a 14
Supletorio si el promedio es menor a 14 pero mayor o igual a 10
Reprueba si el promedio es menor a 10
El programa entregado tiene errores intencionales.
La tarea en clase es identificar, clasificar, corregir y probar esos errores.

*/

#include <iostream>
using namespace std;

int main()
{
    double n1, n2, n3, n4;
    double promedio;

    cout << "Ingrese la nota 1: ";
    cin >> n1;
    cout << "Ingrese la nota 2: ";
    cin >> n2;
    cout << "Ingrese la nota 3: ";
    cin >> n3;
    cout << "Ingrese la nota 4: ";
    cin >> n4;

    //
    promedio = (n1 + n2 + n3 + n4) / 4.0;

    cout << "El promedio es: " << promedio << endl;

    //
    if (promedio < 14.0 && promedio >= 10.0)
    {
        cout << "Supletorio" << endl;
    }
    else if (promedio >= 14.0)
    {
        cout << "Aprueba" << endl;
    }
    else
    {
        cout << "Reprueba" << endl;
    }

    if (n1 < 0 || n2 < 0 || n3 < 0 || n4 < 0)
    {
        cout << "Error: Las notas no pueden ser negativas." << endl;
    }
    

    return 0;
}