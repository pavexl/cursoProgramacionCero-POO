/*
EJERCICIO 2 - CLASE 8

Nombre: Pavel Ganchala
Fecha: 13 de marzo de 2026

Enunciado: Desarrollar un programa en C++ que permita ingresar 2 numeros enteros y luego intercambiar sus valores usando una funcion 
Este ejercicio tiene como objetivo principal, comprender la diferencia entre:
    PASO POR VALOR
    PASO POR REFERENCIA

- E/P/S:

Entrada:
    2 numeros enteros ingresados por el usuario.
    
Proceso:
    Leer 2 numeros.
    Mostrar sus valores antes del intercambio.
    Llamar a una funcion que intercambie los valores.
    Mostrar los valores despues del intercambio.


Salida:
    Valores antes del intercambio.
    Valores despues del intercambio.

============================== CONCEPTOS IMPORTANTES ===========================
1. Paso por valor: La funcion recibe una copia de la variable
    Si cambio esa copia, la variable original no cambia.

2. Paso por referencia: La funcion trabaja con la variable original.
    Si cambio el valor de la variable, entonces va a cambiar fuera de la funcion.

    2.1. EL SIMBOLO &
    En parametros, "&" indica que la funcion recibe una referencia a la variable original.

    Ejemplo:
        void intercambiar(int &a, int &b)

    Eso significa que la funcion trabajara con las variables originales.

3. Variable auxiliar: Variable temporal que guarda un valor mientras se realiza el intercambio.

=============================== PSEUDOCODIGO =============================

Definir a, b como Entero

Leer a y b
Mostrar valores antes.
Intercambiar a y b.
Mostrar valores despues.
*/

//COGIGO EN C++
#include <iostream>
using namespace std;

//================================ DECLARACION DE FUNCIONES (ANTES DEL MAIN) =============================
void intercambiar(int &a, int &b);

int main(){
    //=================== DECLARACION DE VARIABLES =============================
    int a, b;

    //Pido dos numeros enteros
    cout << "Ingrese dos numeros enteros: ";
    cin >> a >> b;

    //Muestro los valores antes del intercambio
    cout << "Valores antes del intercambio: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;

    //=================== LLAMO A LA FUNCION QUE INTERCAMBIA LOS VALORES =============================
    intercambiar(a, b);

    //Muestro los valores despues del intercambio
    cout << "Valores despues del intercambio: " << endl;
    cout << "a= " << a << endl;
    cout << "b= " << b << endl;
    
    return 0;
}

//================================ DEFINO QUE HACE LA FUNCION ==============================
//Funcion que intercambia los valores de a y b
void intercambiar(int &a, int &b){
    int auxiliar;

    //Guardamos temporalmente el valor de a en la variable auxiliar
    auxiliar = a; 

    //Asignamos el valor de b a a
    a = b;

    // Finalmente b toma el valor guardado en auxiliar
    b = auxiliar;
}

