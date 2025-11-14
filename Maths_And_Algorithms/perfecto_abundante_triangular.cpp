#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

bool esTriangular(int n){
    int suma = 0;
    for(int i=1; suma<n; i++){
        suma += i;
        if(suma == n) return true;
    }
    return false;
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    int suma = 0;
    for(int i=1; i<n; i++)
        if(n % i == 0) suma += i;

    if(suma == n) cout << "Perfecto" << endl;
    else if(suma > n) cout << "Abundante" << endl;
    else cout << "Deficiente" << endl;

    if(esTriangular(n)) cout << "Ademas es triangular";
}
