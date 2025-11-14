#include <iostream>
#include "interfaz_applications.h"

using namespace std;

int main() {
    int opcion = -1;

    while (opcion != 0) {

        cout << "\n========== APLICACIONES Y SISTEMAS ==========\n";
        cout << "1. Calculadora basica (+, -, *, /)\n";
        cout << "2. Sistema de reserva de cine\n";
        cout << "3. Sistema de gestion de notas\n";
        cout << "4. Convertidor de monedas\n";
        cout << "5. Sistema de autenticacion\n";
        cout << "6. Evaluador de expresiones\n";
        cout << "7. Sistema de votacion\n";
        cout << "8. Sistema de puntajes de juego\n";
        cout << "9. Calculadora de calorias y BMI\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        cout << "\n";

        switch (opcion) {
            case 1:
                calculadoraBasica();
                break;

            case 2:
                sistemaReservaCine();
                break;

            case 3:
                sistemaGestionNotas();
                break;

            case 4:
                convertidorMonedas();
                break;

            case 5:
                sistemaAutenticacion();
                break;

            case 6:
                evaluadorExpresiones();
                break;

            case 7:
                sistemaVotacion();
                break;

            case 8:
                sistemaPuntajesJuego();
                break;

            case 9:
                calculadoraCaloriasBMI();
                break;

            case 0:
                cout << "Saliendo...\n";
                break;

            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
                break;
        }

        cout << "\n";
    }

    return 0;
}
