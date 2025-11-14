#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

void imprimirZigZagNumeros() {
    int n;
    cout << "Cantidad de numeros: ";
    cin >> n;

    bool haciaArriba = true;

    for (int i = 1; i <= n; i++) {
        if (haciaArriba) {
            cout << i << " ^" << endl;
        } else {
            cout << i << " v" << endl;
        }
        haciaArriba = !haciaArriba;
    }
}
