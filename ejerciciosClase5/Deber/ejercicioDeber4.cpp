/*
Ejercicio 4: Nota final con ponderaciones
Autor: Pavel Ganchala
Fecha: 08 de marzo de 2026
*/

#include <iostream>
using namespace std;

int main(){
    double P1 = 0, P2 = 0, PR = 0, nota = 0;

    cout << "***** BIENVENIDO ***** " <<endl;
    cout << "Ingrese nota del parcial 1: " << endl;
    cin >> P1;

    cout << "Ingrese nota del parcial 2: " << endl;
    cin >> P2;

    cout << "Ingrese nota del proyecto: " << endl;
    cin >> PR;

    if (P1 < 0 || P1 > 10 || P2 < 0 || P2 > 10 || PR < 0 || PR > 10)
    {
        cout << "Datos invalidos" << endl;
    }else{
        nota = (P1 * 0.30) + (P2 * 0.30) + (PR * 0.40);
        cout << "La nota final es: " << nota << endl;
    }
    
    return 0;
}