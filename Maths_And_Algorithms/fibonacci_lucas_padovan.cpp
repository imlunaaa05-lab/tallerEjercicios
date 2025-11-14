#include <iostream>
using namespace std;

void fibonacci(int n){
    long long a=0, b=1;
    cout << "Fibonacci: ";
    for(int i=0; i<n; i++){
        cout << a << " ";
        long long c = a+b;
        a = b;
        b = c;
    }
    cout << endl;
}

void lucas(int n){
    long long a=2, b=1;
    cout << "Lucas: ";
    for(int i=0; i<n; i++){
        cout << a << " ";
        long long c = a+b;
        a = b;
        b = c;
    }
    cout << endl;
}

void padovan(int n){
    long long p[n];
    p[0]=p[1]=p[2]=1;
    for(int i=3;i<n;i++)
        p[i]=p[i-2]+p[i-3];

    cout << "Padovan: ";
    for(int i=0;i<n;i++) cout << p[i] << " ";
}

int main(){
    int n;
    cout << "Cantidad de terminos: ";
    cin >> n;

    fibonacci(n);
    lucas(n);
    padovan(n);
}
