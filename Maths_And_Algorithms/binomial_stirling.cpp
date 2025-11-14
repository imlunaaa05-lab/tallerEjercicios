#include <iostream>
#include <cmath>
using namespace std;

long long factorial(int n){
    long long f = 1;
    for(int i=1; i<=n; i++) f *= i;
    return f;
}

long long combinacion(int n, int k){
    return factorial(n) / (factorial(k) * factorial(n-k));
}

double stirling(int n){
    return sqrt(2*M_PI*n) * pow(n/e, n);
}

int main(){
    int n, k;
    cout << "n y k para combinacion: ";
    cin >> n >> k;

    cout << "Combinacion = " << combinacion(n, k) << endl;

    int m;
    cout << "Numero para Stirling: ";
    cin >> m;

    cout << "Aproximacion Stirling: " << stirling(m);
}
