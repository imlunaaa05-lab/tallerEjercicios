#include <iostream>
#include "interfaz_applications.h"
using namespace std;


void sistemaGestionNotas() {
    int cantidad;
    cout << "\n--- SISTEMA DE GESTION DE NOTAS ---\n";
    cout << "Cantidad de estudiantes: ";
    cin >> cantidad;

    double suma = 0, nota;

    for (int i = 1; i <= cantidad; i++) {
        cout << "Nota del estudiante " << i << ": ";
        cin >> nota;
        suma += nota;
    }

    cout << "Promedio general: " << (suma / cantidad) << "\n";
}
