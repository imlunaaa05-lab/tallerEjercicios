#include <iostream>
#include <cmath>
using namespace std;

bool esFibonacci(long long n){
    long long a = 5*n*n + 4;
    long long b = 5*n*n - 4;
    long long ra = sqrt(a);
    long long rb = sqrt(b);
    return (ra*ra == a || rb*rb == b);
}

bool esKaprekar(int n){
    long long cuadrado = 1LL * n * n;
    string s = to_string(cuadrado);
    for(int i=1; i<s.size(); i++){
        int izquierda = stoi(s.substr(0, i));
        int derecha = stoi(s.substr(i));
        if(derecha > 0 && izquierda + derecha == n) return true;
    }
    return n == 1;
}

bool esNarcisista(int n){
    string s = to_string(n);
    int k = s.size();
    int suma = 0;
    for(char c : s) suma += pow(c - '0', k);
    return suma == n;
}

bool esMersenne(int n){
    for(int i=1; i<31; i++){
        if((1<<i) - 1 == n) return true;
    }
    return false;
}

int main(){
    int n;
    cout << "Ingrese un numero: ";
    cin >> n;

    cout << "Fibonacci: " << (esFibonacci(n) ? "Si" : "No") << endl;
    cout << "Kaprekar: " << (esKaprekar(n) ? "Si" : "No") << endl;
    cout << "Narcisista: " << (esNarcisista(n) ? "Si" : "No") << endl;
    cout << "Mersenne: " << (esMersenne(n) ? "Si" : "No") << endl;
}
