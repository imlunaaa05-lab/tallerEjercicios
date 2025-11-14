#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

void mostrarMenu() {
    cout << "\n======= MENU DE MATEMATICAS =======" << endl;
    cout << " 1. Convertir decimal a binario" << endl;
    cout << " 2. Generar numero aleatorio" << endl;
    cout << " 3. Calcular MCD y MCM" << endl;
    cout << " 4. Calcular area de un triangulo" << endl;
    cout << " 5. Resolver ecuacion cuadratica" << endl;
    cout << " 6. Ejecutar secuencia de Collatz" << endl;
    cout << " 7. Calcular volumen de una esfera" << endl;
    cout << " 8. Estimar numero e (Euler)" << endl;
    cout << " 9. Numero perfecto, abundante o triangular" << endl;
    cout << "10. Fibonacci, Kaprekar, Narcisista y Mersenne" << endl;
    cout << "11. Aproximar pi con serie de Leibniz" << endl;
    cout << "12. Calcular raices con Metodo de Newton" << endl;
    cout << "13. Coeficiente binomial y numeros de Stirling" << endl;
    cout << "14. Aproximar logaritmo con serie de Taylor" << endl;
    cout << "15. Sucesiones: Fibonacci, Lucas y Padovan" << endl;
    cout << "16. Suma de series aritmeticas y geometricas" << endl;
    cout << "17. Suma de cuadrados" << endl;
    cout << " 0. Salir" << endl;
    cout << "====================================" << endl;
    cout << "Ingrese una opcion: ";
}

int main() {
    int opcion;

    do {
        mostrarMenu();
        cin >> opcion;
        cout << endl;

        switch (opcion) {
            case 1: convertirDecimalABinario(); break;
            case 2: generarNumeroAleatorio(); break;
            case 3: calcularMCDyMCM(); break;
            case 4: calcularAreaTriangulo(); break;
            case 5: resolverEcuacionCuadratica(); break;
            case 6: ejecutarCollatz(); break;
            case 7: calcularVolumenEsfera(); break;
            case 8: estimarNumeroEuler(); break;
            case 9: evaluarPerfectoAbundanteTriangular(); break;
            case 10: evaluarFibonacciKaprekarNarcisistaMersenne(); break;
            case 11: aproximarPiLeibniz(); break;
            case 12: calcularRaicesNewton(); break;
            case 13: ejecutarBinomialYStirling(); break;
            case 14: aproximarLogaritmoTaylor(); break;
            case 15: generarFibonacciLucasPadovan(); break;
            case 16: sumarSeriesAritmeticasGeometricas(); break;
            case 17: sumarCuadrados(); break;

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida, intente de nuevo.\n";
        }

        cout << endl;

    } while (opcion != 0);

    return 0;
}
