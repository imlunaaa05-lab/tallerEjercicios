#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand(time(0));
    int aleatorio = 1 + rand() % 100;
    cout << "Numero aleatorio: " << aleatorio;
}
