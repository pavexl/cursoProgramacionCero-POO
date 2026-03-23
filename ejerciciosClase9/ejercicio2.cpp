/*
CLASE 9 - EJERCIO 2 PARA CORREGIR
Autor: Pavel Ganchala
Fecha: 16 de marzo de 2026

Enunciado:

Desarrollar un programa que:
Solicite al usuario 5 numeros enteros
Muestre la suma total
Muestre el numero mayor
Muestre cuantos numeros son positivos

El programa ya fue iniciado, pero contiene errores intencionales de logica y manejo de arreglos.
En clase se debe revisar, corregir y probar.
*/

#include <iostream>
using namespace std;

//========DECLARACION DE FUNCIONES================
int calcularSuma(int numeros[5], int n);
int encontrarMayor(int numeros[5], int n);
int contarPositivos(int numeros[5], int n);

int main()
{
    int n = 5;
    int numeros[5];

    cout << "Ingrese 5 numeros enteros:" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Suma: " << calcularSuma(numeros, n) << endl;
    cout << "Mayor: " << encontrarMayor(numeros, n) << endl;
    cout << "Cantidad de positivos: " << contarPositivos(numeros, n) << endl;

    return 0;
}


//========DEFINICION DE FUNCIONES================
// Funcion para calcular la suma de los elementos del arreglo
int calcularSuma(int numeros[5], int n)
{
    int suma = 0;

    //
    for (int i = 0; i < n; i++)
    {
        suma = suma + numeros[i];
    }

    return suma;
}

// Funcion para encontrar el mayor
int encontrarMayor(int numeros[5], int n)
{
    int mayor = numeros[0]; // Inicializamos mayor con el primer elemento del arreglo

    //
    for (int i = 0; i < 5; i++)
    {
        if (numeros[i] > mayor)

        //Si el numero actual es mayor que el mayor registrado, actualizamos el mayor
        //[-5]  [11] [14]  [-7]   [0]
        //0      1    2     3      4
        {
            mayor = numeros[i];
        }
    }

    return mayor;
}

// Funcion para contar positivos
int contarPositivos(int numeros[5], int n)
{
    int contador = 0;

    for (int i = 0; i < 5; i++)
    {
        //
        if (numeros[i] > 0) //Solo se cuenta numeros mayores que 0, no se cuentan los ceros
        {
            contador++;
        }
    }

    return contador;
}

