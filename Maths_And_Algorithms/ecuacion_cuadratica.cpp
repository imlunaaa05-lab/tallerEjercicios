#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c;
    cout << "Coeficientes a, b, c: ";
    cin >> a >> b >> c;

    double d = b*b - 4*a*c;

    if(d < 0){
        cout << "No tiene soluciones reales";
    }else{
        double x1 = (-b + sqrt(d)) / (2*a);
        double x2 = (-b - sqrt(d)) / (2*a);
        cout << "Solucion 1: " << x1 << endl;
        cout << "Solucion 2: " << x2 << endl;
    }
}
