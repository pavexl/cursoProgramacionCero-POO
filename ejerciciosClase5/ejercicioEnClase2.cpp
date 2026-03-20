/*
Ejercicio 2
Autor: Pavel Ganchala
Fecha: 06 de marzo de 2026
Enunciado: Pida la base y la altura para calcular el area de un rectangulo.
*/

#include <iostream>
using namespace std;

int main(){
    int base = 0, altura = 0, area = 0;
    cout << "Ingrese la base:  " << endl;
    cin >> base;

    cout << "Ingrese la altura: " << endl;
    cin >>altura;

    area = base * altura;
    cout << "El resultado es: " << area << endl;

    return 0;
}