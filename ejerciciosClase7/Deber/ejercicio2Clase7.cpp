#include <iostream>
using namespace std;

int main() {

    int ventas[6];
    int buscar;
    bool encontrado = false;
    int posicion = -1;

    // Cargar datos
    for(int i = 0; i < 6; i++) {
        cout << "Ingrese cantidad vendida " << i+1 << ": ";
        cin >> ventas[i];
    }

    cout << "\nCantidades registradas:\n";

    // Mostrar datos
    for(int i = 0; i < 6; i++) {
        cout << ventas[i] << " ";
    }

    cout << "\n\nIngrese la cantidad a buscar: ";
    cin >> buscar;

    // Busqueda secuencial
    for(int i = 0; i < 6; i++) {
        if(ventas[i] == buscar) {
            encontrado = true;
            posicion = i;
            break;
        }
    }

    if(encontrado) {
        cout << "La cantidad se encontro en la posicion: " << posicion << endl;
    } else {
        cout << "La cantidad no fue encontrada en el arreglo." << endl;
    }

    return 0;
}