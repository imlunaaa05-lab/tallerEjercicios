#include <iostream>
#include "interfaz_simulacion.h"

using namespace std;

void generarTripletasPitagoricas() {
    int limite;
    cout << "Generar tripletas pitagoricas hasta: ";
    cin >> limite;

    for (int a = 1; a <= limite; a++) {
        for (int b = a; b <= limite; b++) {
            for (int c = b; c <= limite; c++) {
                if (a*a + b*b == c*c) {
                    cout << "(" << a << ", " << b << ", " << c << ")\n";
                }
            }
        }
    }
}
