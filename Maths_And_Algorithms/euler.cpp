#include <iostream>
using namespace std;

int factorial(int n){
    int res = 1;
    for(int i=1; i<=n; i++) res *= i;
    return res;
}

int main(){
    double e = 0;
    int terminos;
    cout << "Cantidad de terminos: ";
    cin >> terminos;

    for(int i=0; i<terminos; i++){
        e += 1.0 / factorial(i);
    }

    cout << "Aproximacion de e = " << e;
}
