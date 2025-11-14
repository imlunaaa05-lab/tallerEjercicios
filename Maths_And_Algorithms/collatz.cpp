#include <iostream>
#include "interfaz_matematicas.h"

using namespace std;

int main(){
    long long n;
    cout << "Ingrese un numero: ";
    cin >> n;

    while(n != 1){
        cout << n << " ";
        if(n % 2 == 0) n /= 2;
        else n = 3 * n + 1;
    }
    cout << 1;
}
