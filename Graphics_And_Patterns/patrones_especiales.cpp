#include <iostream>
#include <vector>
#include "interfaz_graficos.h"

using namespace std;

void imprimirPatronesEspeciales() {
    int n;
    cout << "Tamaño del patrón: ";
    cin >> n;

  
    cout << "\nPatrón en forma de X:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }


    cout << "\nPatrón en forma de Z:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1 || j == n - i - 1) cout << "*";
            else cout << " ";
        }
        cout << endl;
    }

   
    cout << "\nTriángulo de Floyd:\n";
    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) cout << num++ << " ";
        cout << endl;
    }

    cout << "\nTriángulo de Pascal:\n";
    vector<vector<int>> pascal(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++) {
        pascal[i][0] = pascal[i][i] = 1;
        for (int j = 1; j < i; j++)
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
    }
    for (int i = 0; i < n; i++) {
        for (int e = 0; e < n - i; e++) cout << " ";
        for (int j = 0; j <= i; j++) cout << pascal[i][j] << " ";
        cout << endl;
    }
}
