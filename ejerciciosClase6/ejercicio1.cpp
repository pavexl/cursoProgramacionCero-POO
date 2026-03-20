/* 
Ejercicio 1: Contador de while
Autor: Pavel Ganchala
Fecha: 09 de marzo de 2026

Enunciado: Elaborar un programa en C++ que solicite al usuario un numero entero positivo N y muestre en pantalla los numeros
desde 1 hasta N usando un bucle while.

Si el usuario ingresa un valor menor o igual a 0, el programa debe mostrar un mensaje de error y terminar.

E/P/S

Entrada: 
    Un numero entero positivo N.

Proceso:
    Leer el valor de N
    Verificar si N es mayor que 0
        Si no, mostrar un mensaje de error
        Si si, usar un contador que inicie en 1
    Repetir mientras el contador sea menor o igual a N
    Mostrar el valor del contador
    Aumentar el contador en 1 en cada vuelta.

Salida:
    Los numeros del 1 hasta N
    O un mensaje de error si el numero ingresado no es valido.
*/

#include <iostream>
using namespace std;

int main() {
    //Declaramos e inicializamos las variables necesarias
    int N = 0, contador = 0;

    //Pedir al usurio un numero entero positivo
    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    //Validamos que el numero sea mayor que 0
    if (N <= 0)
    {
        //Si el numero no es valido, mostrar un mensaje de error
        cout << "ERROR: El numero debe ser mayor que 0." << endl;
    } else{
        //Inicializamos el contador en 1
        contador = 1;

        //Repetimos mientras el contador sea menor o igual a N
        while (contador <= N)
        {
            //Mostrar el valor actural del contador
            cout << contador << endl;

            //Aumentamos el contador en 1 para evitar bucle indefinido
            contador = contador + 1;
        }
        
    }

    return 0;
}