#include <iostream>
#include "interfaz_graficos.h"

using namespace std;

int main() {
    int opcion;

    do {
        cout << "\n===== GRAFICOS Y PATRONES =====\n";
        cout << "1. Imprimir piramide de asteriscos\n";
        cout << "2. Imprimir patrones alineados, invertidos y cuadrados\n";
        cout << "3. Imprimir rectangulo hueco N x M\n";
        cout << "4. Imprimir tablero con * y +\n";
        cout << "5. Imprimir patrones especiales (X, Z, Floyd, Pascal)\n";
        cout << "6. Imprimir patron zig-zag de numeros\n";
        cout << "7. Salir\n";
        cout << "Seleccione opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1: imprimirPiramideAsteriscos(); break;
            case 2: imprimirPatronesVariados(); break;
            case 3: imprimirRectanguloHueco(); break;
            case 4: imprimirTableroAsteriscos(); break;
            case 5: imprimirPatronesEspeciales(); break;
            case 6: imprimirZigZagNumeros(); break;
            case 7: cout << "Saliendo...\n"; break;
            default: cout << "Opcion invalida.\n";
        }

        cout << endl;

    } while (opcion != 7);

    return 0;
}
