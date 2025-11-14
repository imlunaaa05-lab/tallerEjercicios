#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double r;
    cout << "Radio: ";
    cin >> r;
    double volumen = (4.0/3.0) * M_PI * pow(r,3);
    cout << "Volumen = " << volumen;
}
