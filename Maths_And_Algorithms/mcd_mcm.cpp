#include <iostream>
using namespace std;

int mcd(int a, int b){
    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int mcm(int a, int b){
    return a * b / mcd(a, b);
}

int main(){
    int x, y, z;
    cout << "Ingrese 3 numeros: ";
    cin >> x >> y >> z;

    int mcd_total = mcd(mcd(x, y), z);
    int mcm_total = mcm(mcm(x, y), z);

    cout << "MCD = " << mcd_total << endl;
    cout << "MCM = " << mcm_total << endl;
}
