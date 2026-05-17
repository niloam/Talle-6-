#include <iostream>
using namespace std;

void muestraLAMatriz(int mat[3][3]) {
    cout << "Matriz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) cout << mat[i][j] << " ";
        cout << endl;
    }
}

void sumarFila(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        int suma = 0;
        for (int j = 0; j < 3; j++) suma += mat[i][j];
        cout << "Suma fila " << i << " = " << suma << endl;
    }
}

int sumaLaDiagonal(int mat[3][3]) {
    int suma = 0;
    for (int i = 0; i < 3; i++) suma += mat[i][i];
    return suma;
}

int main() {
    int mat[3][3];
    cout << "Digite elementos de matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) cin >> mat[i][j];

    muestraLAMatriz(mat);
    sumarFila(mat);
    cout << "Suma diagonal principal = " << sumaLaDiagonal(mat) << endl;

    return 0;
}
