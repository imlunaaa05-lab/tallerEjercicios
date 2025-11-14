#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

double raizCuadrada(double n){
    double x = n;
    for(int i=0; i<20; i++)
        x = (x + n/x) / 2;
    return x;
}

double raizCubica(double n){
    double x = n;
    for(int i=0; i<20; i++)
        x = (2*x + n/(x*x)) / 3;
    return x;
}

int main(){
    double n;
    cout << "Numero: ";
    cin >> n;

    cout << "Raiz cuadrada: " << raizCuadrada(n) << endl;
    cout << "Raiz cubica: " << raizCubica(n) << endl;
}
