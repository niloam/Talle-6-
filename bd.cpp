//Ejercicio 6
#include <iostream>
#include "bd.h"
using namespace std;

void llenarMatriz(char mat[5][3], int filas, int columnas) {
    cout << "Ingrese datos de estudiantes (Codigo Inicial Grupo):" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cin >> mat[i][j];
        }
    }
}

void mostrarMatriz(char mat[5][3], int filas, int columnas) {
    cout << "Base de datos:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

bool buscarCodigo(char mat[5][3], int filas, char codigo) {
    for (int i = 0; i < filas; i++) {
        if (mat[i][0] == codigo) {
            cout << "Registro encontrado: ";
            for (int j = 0; j < 3; j++) cout << mat[i][j] << " ";
            cout << endl;
            return true;
        }
    }
    return false;
}

int contarGrupo(char mat[5][3], int filas, char grupo) {
    int cont = 0;
    for (int i = 0; i < filas; i++) {
        if (mat[i][2] == grupo) cont++;
    }
    return cont;
}
