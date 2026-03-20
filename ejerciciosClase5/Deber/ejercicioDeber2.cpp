/*
Ejercicio 2: Area y perímetro de un rectángulo
Autor: Pavel Ganchala
Fecha: 08 de marzo de 2026
*/

#include <iostream>
using namespace std;

int main(){
    //Declarar e incializar
    double base = 0, altura = 0, area = 0, perimetro = 0;

    //Leer entradas
    cout << "***** BIENVENIDO ***** " <<endl;
    cout << "Ingrese la base del rectangulo: " << endl;
    cin >> base;

    cout << "Ingrese la altura del rectangulo: " << endl;
    cin >> altura;

    //Proceso
    if (base < 0 || altura < 0)
    {
        cout << "Dato invalido" << endl;
    }else {
        area = base * altura;
        perimetro = 2 * (base + altura);

        //Mostrar salidas
        cout << "El area del rectangulo es: " << area << endl;
        cout << "El perimetro del rectangulo es: " << perimetro << endl;
    }

    return 0;
}