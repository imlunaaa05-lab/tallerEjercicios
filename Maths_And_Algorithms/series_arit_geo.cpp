#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int tipo;
    cout << "1 = Aritmetica, 2 = Geometrica: ";
    cin >> tipo;

    double a, d, r, n;

    if(tipo == 1){
        cout << "Primer termino, diferencia y cantidad: ";
        cin >> a >> d >> n;
        double suma = n/2 * (2*a + (n-1)*d);
        cout << "Suma = " << suma;
    }
    else{
        cout << "Primer termino, razon y cantidad: ";
        cin >> a >> r >> n;
        double suma;
        if(r == 1) suma = a * n;
        else suma = a * (pow(r,n) - 1) / (r - 1);
        cout << "Suma = " << suma;
    }
}
