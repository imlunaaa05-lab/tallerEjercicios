#include <iostream>
#include "interfaz_applications.h"
using namespace std;

void sistemaVotacion() {
    int votosA = 0, votosB = 0, votosC = 0;
    int cantidad, voto;

    cout << "\n--- SISTEMA DE VOTACION ---\n";
    cout << "Cantidad de votantes: ";
    cin >> cantidad;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Voto del votante " << i << " (1=A, 2=B, 3=C): ";
        cin >> voto;

        if (voto == 1) votosA++;
        else if (voto == 2) votosB++;
        else if (voto == 3) votosC++;
        else cout << "Voto invalido.\n";
    }

    cout << "\nResultados:\n";
    cout << "A: " << votosA << "\n";
    cout << "B: " << votosB << "\n";
    cout << "C: " << votosC << "\n";
}
