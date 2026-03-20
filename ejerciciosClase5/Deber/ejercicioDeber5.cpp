/*
Ejercicio 5: Reparto de horas en semanas, días y horas
Autor: Pavel Ganchala
Fecha: 08 de marzo de 2026
*/

#include <iostream>
using namespace std;

int main(){
    int horasTotales = 0, semanas = 0, dias = 0, horas = 0, horasRestantes = 0;

    cout << "***** BIENVENIDO ***** " <<endl;
    cout << "Ingrese el numero total de horas: " << endl;
    cin >> horasTotales;

    if (horasTotales < 0)
    {
        cout << "Dato invalido" << endl;
    } else{
        semanas = (horasTotales / 168);
        horasRestantes = horasTotales - (semanas * 168);

        dias = (horasRestantes / 24);
        horas = horasRestantes - (dias * 24);

        cout << "Sobran: " << semanas << " semanas" << endl;
        cout << "Sobran: " << dias << " dias" << endl;
        cout << "Sobran: " << horas << " horas" << endl;
    }

    return 0;
}