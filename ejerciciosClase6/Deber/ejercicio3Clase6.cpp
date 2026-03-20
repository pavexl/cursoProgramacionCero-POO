#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese un numero entero: ";
    cin >> numero;

    cout << "Tabla de multiplicar del " << numero << ":" << endl;

    for (int i = 1; i <= 10; i++) {
        cout << numero << " x " << i << " = " << numero * i << endl;
    }

    cout << "La tabla fue generada correctamente." << endl;

    return 0;
}