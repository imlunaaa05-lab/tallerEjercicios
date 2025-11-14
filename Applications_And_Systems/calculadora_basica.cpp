#include <iostream>
using namespace std;

void calculadoraBasica() {
    double a, b;
    char operacion;

    cout << "\n--- CALCULADORA BASICA ---\n";
    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese la operacion (+, -, *, /): ";
    cin >> operacion;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    switch (operacion) {
        case '+': cout << "Resultado: " << (a + b) << "\n"; break;
        case '-': cout << "Resultado: " << (a - b) << "\n"; break;
        case '*': cout << "Resultado: " << (a * b) << "\n"; break;
        case '/':
            if (b != 0) cout << "Resultado: " << (a / b) << "\n";
            else cout << "Error: division entre cero.\n";
            break;
        default:
            cout << "Operacion no valida.\n";
    }
}
