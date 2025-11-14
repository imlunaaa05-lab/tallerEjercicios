#include <iostream>
#include <cstdlib>
#include <ctime>
#include "interfaz_simulacion.h"

using namespace std;

void juegoAdivinarNumero() {
    srand(time(NULL));
    int numeroSecreto = (rand() % 100) + 1;

    int intento;
    cout << "Adivina el numero (1-100): ";

    do {
        cin >> intento;

        if (intento > numeroSecreto)
            cout << "Muy alto. Intenta otra vez: ";
        else if (intento < numeroSecreto)
            cout << "Muy bajo. Intenta otra vez: ";
        else
            cout << "Correcto! El numero era " << numeroSecreto << endl;

    } while (intento != numeroSecreto);
}
