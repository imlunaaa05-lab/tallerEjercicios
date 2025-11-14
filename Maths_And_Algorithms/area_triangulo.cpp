#include <iostream>
#include <cmath>
#include "interfaz_matematicas.h"

using namespace std;

int main(){
    double a, b, c;
    cout << "Lados del triangulo: ";
    cin >> a >> b >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));

    cout << "Area = " << area;
}
