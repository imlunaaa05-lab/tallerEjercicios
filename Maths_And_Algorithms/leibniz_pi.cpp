#include <iostream>
using namespace std;

int main(){
    int iteraciones;
    cout << "Cantidad de terminos: ";
    cin >> iteraciones;

    double pi = 0;
    double signo = 1;

    for(int i=0; i<iteraciones; i++){
        pi += signo / (2*i + 1);
        signo *= -1;
    }

    pi *= 4;
    cout << "Aproximacion de PI = " << pi;
}
