#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

long long sumaCuadradosNaturales(long long N) {
    if (N <= 0) return 0;
    return N * (N + 1) * (2 * N + 1) / 6;
}

long long sumaCuadradosImpares(long long N) {
    if (N <= 0) return 0;
    long long sum_k2 = N * (N + 1) * (2 * N + 1) / 6;
    long long sum_k  = N * (N + 1) / 2;
    return 4 * sum_k2 - 4 * sum_k + N;
}

int main() {
    cout << "Elija opcion:\n";
    cout << "1) Suma de cuadrados de los primeros N naturales (1^2 + 2^2 + ...)\n";
    cout << "2) Suma de cuadrados de los primeros N impares (1^2 + 3^2 + ...)\n";
    cout << "Opcion: ";
    int opcion;
    if (!(cin >> opcion)) return 0;

    cout << "Ingrese N (entero positivo): ";
    long long N;
    if (!(cin >> N)) return 0;

    if (N <= 0) {
        cout << "N debe ser un entero positivo.\n";
        return 0;
    }

    if (opcion == 1) {
        cout << "Suma de cuadrados primeros " << N << " naturales = "
             << sumaCuadradosNaturales(N) << "\n";
    } else if (opcion == 2) {
        cout << "Suma de cuadrados primeros " << N << " impares = "
             << sumaCuadradosImpares(N) << "\n";
    } else {
        cout << "Opcion no valida.\n";
    }

    return 0;
}
