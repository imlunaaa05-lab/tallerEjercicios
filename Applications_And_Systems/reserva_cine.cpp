#include <iostream>
#include "interfaz_applications.h"
using namespace std;


void sistemaReservaCine() {
    const int filas = 5, columnas = 5;
    char sala[filas][columnas];

    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            sala[i][j] = 'O'; // O = libre

    cout << "\n--- SISTEMA DE RESERVA DE CINE ---\n";

    int f, c;
    cout << "Seleccione asiento.\n";
    cout << "Fila (1-5): ";
    cin >> f;
    cout << "Columna (1-5): ";
    cin >> c;

    if (f < 1 || f > filas || c < 1 || c > columnas) {
        cout << "Asiento invalido.\n";
        return;
    }

    if (sala[f-1][c-1] == 'X') {
        cout << "Asiento ya ocupado.\n";
    } else {
        sala[f-1][c-1] = 'X';
        cout << "Asiento reservado correctamente.\n";
    }
}
