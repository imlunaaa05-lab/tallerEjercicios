#include <iostream>
#include <cstdlib>
#include <ctime>
#include "interfaz_simulacion.h"

using namespace std;

void simularPiedraPapelTijera() {
    srand(time(NULL));

    int eleccionUsuario;
    cout << "Elige una opcion:\n1. Piedra\n2. Papel\n3. Tijera\n> ";
    cin >> eleccionUsuario;

    int eleccionPC = (rand() % 3) + 1;

    cout << "La computadora eligio: ";
    if (eleccionPC == 1) cout << "Piedra\n";
    else if (eleccionPC == 2) cout << "Papel\n";
    else cout << "Tijera\n";

    if (eleccionUsuario == eleccionPC) {
        cout << "Empate.\n";
    } else if ((eleccionUsuario == 1 && eleccionPC == 3) ||
               (eleccionUsuario == 2 && eleccionPC == 1) ||
               (eleccionUsuario == 3 && eleccionPC == 2)) {
        cout << "Ganaste!\n";
    } else {
        cout << "Perdiste.\n";
    }
}
