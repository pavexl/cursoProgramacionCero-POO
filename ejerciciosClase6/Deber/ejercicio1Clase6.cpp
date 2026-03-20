#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;

    cout << "Ingrese un numero entero positivo: ";
    cin >> N;

    if (N <= 0) {
        cout << "Error: debe ingresar un numero mayor que 0." << endl;
    } else {
        cout << "Numeros pares desde 1 hasta " << N << ":" << endl;

        while (i <= N) {
            if (i % 2 == 0) {
                cout << i << " ";
            }
            i++;
        }
    }

    return 0;
}