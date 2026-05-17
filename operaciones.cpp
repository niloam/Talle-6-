#include <iostream>
#include "operaciones.h"
using namespace std;

void suma(int a, int b, int &resultado) { resultado = a + b; }
void resta(int a, int b, int &resultado) { resultado = a - b; }
void multiplica(int a, int b, int &resultado) { resultado = a * b; }

void division(int a, int b, int &cociente, int &residuo) {
    if (b == 0) {
        cociente = 0; residuo = 0;
        cout << "Error: division por cero." << endl;
    } else {
        cociente = a / b;
        residuo = a % b;
    }
}

void sumaArreglo(int arr[], int n, int &resultado) {
    resultado = 0;
    for (int i = 0; i < n; i++) resultado += arr[i];
}

void sumaMatriz(int mat[][3], int filas, int columnas, int &resultado) {
    resultado = 0;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            resultado += mat[i][j];
}
