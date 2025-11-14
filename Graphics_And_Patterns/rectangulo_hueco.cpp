#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

void imprimirRectanguloHueco() {
    int filas, columnas;
    cout << "Filas: ";
    cin >> filas;
    cout << "Columnas: ";
    cin >> columnas;

    for (int i = 1; i <= filas; i++) {
        for (int j = 1; j <= columnas; j++) {
            if (i == 1 || i == filas || j == 1 || j == columnas)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}
