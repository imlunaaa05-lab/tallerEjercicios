#include <iostream>
#include <cstdlib>
#include <ctime>
#include "interfaz_simulacion.h"

using namespace std;

void simularLanzamientoDado() {
    srand(time(nullptr));
    int resultado = (rand() % 6) + 1;
    cout << "El dado cayo en: " << resultado << endl;
}
