#include <iostream>
using namespace std;

int main() {
    int num;
    int suma = 0;
    int contador = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Ingrese numero " << i << ": ";
        cin >> num;

        suma += num;
        contador++;
    }

    cout << "La suma total es: " << suma << endl;
    cout << "Cantidad de numeros ingresados: " << contador << endl;

    return 0;
}