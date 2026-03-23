#include <iostream>
using namespace std;

int main() {

    int edades[8];
    int buscar;
    bool encontrado = false;
    int posicion = -1;

    // Cargar edades
    for(int i = 0; i < 8; i++) {
        cout << "Ingrese la edad " << i+1 << ": ";
        cin >> edades[i];
    }

    cout << "\nEdades registradas:\n";

    // Mostrar edades con posición
    for(int i = 0; i < 8; i++) {
        cout << "Posicion " << i << ": " << edades[i] << endl;
    }

    // Pedir edad a buscar
    cout << "\nIngrese una edad a buscar: ";
    cin >> buscar;

    // Busqueda secuencial
    for(int i = 0; i < 8; i++) {
        if(edades[i] == buscar) {
            encontrado = true;
            posicion = i;
            break; // detener en la primera coincidencia
        }
    }

    if(encontrado) {
        cout << "Edad encontrada en la posicion: " << posicion << endl;
    } else {
        cout << "La edad no fue encontrada." << endl;
    }

    return 0;
}