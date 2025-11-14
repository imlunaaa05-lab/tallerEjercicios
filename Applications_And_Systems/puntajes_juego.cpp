#include <iostream>
#include "interfaz_applications.h"
using namespace std;

void sistemaPuntajesJuego() {
    int jugadores;
    cout << "\n--- SISTEMA DE PUNTAJES DE JUEGO ---\n";
    cout << "Numero de jugadores: ";
    cin >> jugadores;

    int puntaje, mayor = -999999;

    for (int i = 1; i <= jugadores; i++) {
        cout << "Puntaje del jugador " << i << ": ";
        cin >> puntaje;

        if (puntaje > mayor) mayor = puntaje;
    }

    cout << "El puntaje mas alto es: " << mayor << "\n";
}
