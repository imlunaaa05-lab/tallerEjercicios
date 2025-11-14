#include <iostream>
#include <algorithm>
using namespace std;

string convertirDecimalABinario(int n){
    if(n == 0) return "0";
    string binario = "";
    while(n > 0){
        binario += char((n % 2) + '0');
        n /= 2;
    }
    reverse(binario.begin(), binario.end());
    return binario;
}

int main(){
    int numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    cout << "Binario: " << convertirDecimalABinario(numero);
}
