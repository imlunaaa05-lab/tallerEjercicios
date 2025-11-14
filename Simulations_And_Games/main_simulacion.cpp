#include <iostream>
#include "interfaz_simulacion.h"

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===== SIMULACION Y JUEGOS =====\n";
        cout << "1. Simular lanzamiento de un dado\n";
        cout << "2. Simular piedra, papel o tijera\n";
        cout << "3. Juego de adivinar el numero\n";
        cout << "4. Generar tripletas pitagoricas\n";
        cout << "5. Generador de numeros aleatorios (uniforme o normal)\n";
        cout << "6. Salir\n";
        cout << "Seleccione opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: simularLanzamientoDado(); break;
            case 2: simularPiedraPapelTijera(); break;
            case 3: juegoAdivinarNumero(); break;
            case 4: generarTripletasPitagoricas(); break;
            case 5: generadorDistribucionesAleatorias(); break;
            case 6: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n";
        }

        cout << endl;

    } while (opcion != 6);

    return 0;
}
