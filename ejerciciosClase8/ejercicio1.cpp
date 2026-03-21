/*
EJERCICIO 1 - CLASE 8

Autor: Pavel Ganchala
Fecha: 13 de marzo de 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 4 numeros enteros y calcular su promedio.
El programa debe usar funciones para:

    1. LEER los 4 numeros,
    2. CALCULAR la suma,
    3. CALCULAR el promedio,
    4. MOSTRAR los resultado.

El objetivo es comprender como dividir un problema en varias funciones con tareas claras.


- E/P/S:

Entrada:
    4 numeros enteros ingresados por el usuario.

Proceso:
    Leer los 4 numeros.
    Calcular la suma.
    Calcular el promedio.
    Mostrar los resultados en pantalla.

Salida:
    La suma de los 4 numeros.
    El promedio de los 4 numeros.


============================== PLANTILLA ======================================

- Funcion con retorno

tipo nombreFuncion(parametros){
    / instrucciones
    return resultado;
}

- Funcion void

void nombreFuncion(parametros){
    / instrucciones
}


-------- PSEUDOCODIGO -----------

Definir n1, n2, n3, n4, suma como entero
Definir promedio como real

Leer los 4 numeros
Calcular suma
Calcular promedio
Mostrar suma y promedio

---------- VERSION MODULARIZACION (CON FUNCIONES) ---------------

Funcion leerCuatroNumeros(...)
Funcion calcularSuma(...)
Funcion calcularPromedio(...)
Funcion mostrarResultados(...)

Inicio
    leerCuatroNumeros(...)
    suma = calcularSuma(...)
    promedio = calcularPromedio(suma)
    mostrarResultados(suma, promedio)
Fin
*/

//---------------------- CODIGO EN C++ -----------------------------------
#include <iostream>
using namespace std;

//=============================== DECLARACION DE FUNCIONES (ANTES DEL MAIN) =============================

//Prototipo de funciones o firmas de funciones (declaro las funciones)
void leerCuatroNumeros(int &a, int &b, int &c, int &d);
int calcularSuma(int a, int b, int c, int d);
double calcularPromedio(int suma); // double es un tipo de datos que permite declarar nunmeros decimales
void mostrarResultados(int suma, double promedio);

//=============================== EN EL MAIN, COMO VA A SER EL FLUJO DE EJECUCION DEL PROGRAMA =============================
//Funcion principal
int main(){

    //=================== DECLARACION DE VARIABLES =============================

    //Variables donde se guardaran los numeros, no necesariamente tienen que ser los mismos que declaramos en las funciones
    int nota1, nota2, nota3, nota4;

    //Variables para resultados
    int suma;
    double promedio;

    //=================== LLAMO A LAS FUNCIONES DEL PROGRAMA, Y PASANDO LOS PARAMETROS (VARIABLES) DEFINIDOS EN EL MAIN ============================= 

    //Llamamos a la funcion que lee los 4 numeros
    leerCuatroNumeros(nota1, nota2, nota3, nota4);
    
    //Llamo a la funcion que calcula la suma
    suma = calcularSuma(nota1, nota2, nota3, nota4);

    //Llamamos a la funcion que calcula el promedio
    promedio = calcularPromedio(suma);

    //Llamo a la funcion que muestra los resultados
    mostrarResultados(suma, promedio);

    return 0;
}

//=============================== DEFINO QUE HACE CADA FUNCION (DESPUES DEL MAIN) =============================

//Esta funcion lee 4 numeros y los guarda en las variables originales
void leerCuatroNumeros(int &a, int &b, int&c, int &d){
    cout <<"Ingrese 4 numeros enteros: " << endl;
    cin >> a >> b >> c >> d;
}

//Esta funcion recibe 4 numeros y devuelve la suma de ellos
int calcularSuma(int a, int b, int c, int d){
    return a + b + c + d;
}

//Esta funcion recibe la suma y devuelve el promedio
double calcularPromedio(int suma){ 
    return suma / 4.0; // 4.0 es un numero decimal para que el resultado sea decimal
}

//Esta funcion recibe la suma y el promedio y los muestra en pantalla
void mostrarResultados(int suma, double promedio){ //Es void porque solo realiza una accion, no devuelve nada
    cout<< "RRESULTADOS: " << endl;
    cout << "La suma de los 4 numeros es: " << suma << endl;
    cout << "El promedio de los 4 numeros es: " << promedio << endl;
}
