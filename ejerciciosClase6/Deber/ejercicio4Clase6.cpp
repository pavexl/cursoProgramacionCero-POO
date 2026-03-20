#include <iostream>
using namespace std;

int main() {

    int opcion;
    int numero;

    do {
        cout << "\n===== MENU =====" << endl;
        cout << "1. Mostrar el doble de un numero" << endl;
        cout << "2. Mostrar el triple de un numero" << endl;
        cout << "3. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch(opcion) {

            case 1:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El doble es: " << numero * 2 << endl;
                break;

            case 2:
                cout << "Ingrese un numero: ";
                cin >> numero;
                cout << "El triple es: " << numero * 3 << endl;
                break;

            case 3:
                cout << "Usted ha salido del programa." << endl;
                break;

            default:
                cout << "Opcion invalida. Ingrese nuevamente." << endl;
        }

    } while(opcion != 3);

    return 0;
}