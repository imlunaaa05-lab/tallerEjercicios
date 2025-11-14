#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

void imprimirTableroAsteriscos() {
    int n;
    cout << "Tamaño del tablero: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0) cout << "*";
            else cout << "+";
        }
        cout << endl;
    }
}
