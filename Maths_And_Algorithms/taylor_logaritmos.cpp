#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

int main(){
    double x;
    int terminos;
    cout << "Ingrese x (0 < x <= 2): ";
    cin >> x;
    cout << "Cantidad de terminos: ";
    cin >> terminos;

    double resultado = 0;
    double y = x - 1;

    for(int n=1; n<=terminos; n++){
        double termino = (n % 2 == 1 ? 1 : -1) * (pow(y, n) / n);
        resultado += termino;
    }

    cout << "Logaritmo aproximado: " << resultado;
}
