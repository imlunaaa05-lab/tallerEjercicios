#include <iostream>
#include "interfaz_applications.h"
using namespace std;

void evaluadorExpresiones() {
    double a, b;
    char op;

    cout << "\n--- EVALUADOR DE EXPRESIONES ---\n";
    cout << "Ingrese una expresion (ej: 5 * 6): ";
    cin >> a >> op >> b;

    switch (op) {
        case '+': cout << "Resultado: " << a + b << "\n"; break;
        case '-': cout << "Resultado: " << a - b << "\n"; break;
        case '*': cout << "Resultado: " << a * b << "\n"; break;
        case '/':
            if (b != 0) cout << "Resultado: " << a / b << "\n";
            else cout << "Error: division por cero.\n";
            break;
        default: cout << "Operacion no valida.\n";
    }
}
