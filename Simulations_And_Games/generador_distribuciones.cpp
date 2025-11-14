#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include "interfaz_simulacion.h"

using namespace std;

// Box-Muller: genera distribucion normal
double generarNormal(double media = 0, double desviacion = 1) {
    double u1 = (rand() + 1.0) / (RAND_MAX + 1.0);
    double u2 = (rand() + 1.0) / (RAND_MAX + 1.0);

    double z = sqrt(-2 * log(u1)) * cos(2 * M_PI * u2);
    return media + desviacion * z;
}

void generadorDistribucionesAleatorias() {
    srand(time(NULL));
    
    int opcion;
    cout << "Selecciona distribucion:\n";
    cout << "1. Uniforme (0 a 1)\n";
    cout << "2. Normal (media 0, desviacion 1)\n> ";
    cin >> opcion;

    if (opcion == 1) {
        double valor = (rand() / (double)RAND_MAX);
        cout << "Valor uniforme: " << valor << endl;
    }
    else if (opcion == 2) {
        double valor = generarNormal();
        cout << "Valor normal: " << valor << endl;
    }
    else {
        cout << "Opcion no valida.\n";
    }
}
