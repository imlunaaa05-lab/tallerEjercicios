#include <iostream>
#include "interfaz_applications.h"
using namespace std;

void calculadoraCaloriasBMI() {
    double peso, altura;

    cout << "\n--- CALCULADORA DE CALORIAS Y BMI ---\n";
    cout << "Peso (kg): ";
    cin >> peso;
    cout << "Altura (m): ";
    cin >> altura;

    double bmi = peso / (altura * altura);

    cout << "BMI: " << bmi << "\n";

    double calorias = peso * 24; 
    cout << "Calorias diarias estimadas: " << calorias << "\n";
}
