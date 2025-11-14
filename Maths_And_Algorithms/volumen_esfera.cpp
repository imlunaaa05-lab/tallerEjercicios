#include <iostream>
#include <cmath>
#include "interfaz_matematicas.h"

using namespace std;

int main(){
    double r;
    cout << "Radio: ";
    cin >> r;
    double volumen = (4.0/3.0) * M_PI * pow(r,3);
    cout << "Volumen = " << volumen;
}
