#include <iostream>
#include "interfaz_applications.h"
using namespace std;

void convertidorMonedas() {
    double cantidad;
    int opcion;

    const double tasaUSD = 4300.0; // ejemplo

    cout << "\n--- CONVERTIDOR DE MONEDAS ---\n";
    cout << "1. COP a USD\n";
    cout << "2. USD a COP\n";
    cout << "Seleccione: ";
    cin >> opcion;

    cout << "Ingrese cantidad: ";
    cin >> cantidad;

    if (opcion == 1)
        cout << "USD: " << (cantidad / tasaUSD) << "\n";
    else if (opcion == 2)
        cout << "COP: " << (cantidad * tasaUSD) << "\n";
    else
        cout << "Opcion invalida.\n";
}
