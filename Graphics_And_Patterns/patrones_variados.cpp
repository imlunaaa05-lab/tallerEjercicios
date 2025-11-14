#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

void imprimirPatronesVariados() {
    int n;
    cout << "Tamaño del patron: ";
    cin >> n;

    cout << "\nAlineado a la derecha:\n";
    for (int i = 1; i <= n; i++) {
        for (int e = 1; e <= n - i; e++) cout << " ";
        for (int a = 1; a <= i; a++) cout << "*";
        cout << endl;
    }

    cout << "\nInvertido:\n";
    for (int i = n; i >= 1; i--) {
        for (int a = 1; a <= i; a++) cout << "*";
        cout << endl;
    }

    cout << "\nCuadrado:\n";
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) cout << "*";
        cout << endl;
    }
}
