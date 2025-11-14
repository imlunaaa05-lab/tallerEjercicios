#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

void imprimirPiramideAsteriscos() {
    int n;
    cout << "Altura de la piramide: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        for (int e = 1; e <= n - i; e++) cout << " ";
        for (int a = 1; a <= 2*i - 1; a++) cout << "*";
        cout << endl;
    }
}
