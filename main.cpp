#include <iostream>
#include "bd.h"
using namespace std;

int main() {
    const int filas = 5, columnas = 3;
    char mat[filas][columnas];

    // 1. Llenar matriz
    llenarMatriz(mat, filas, columnas);

    // 2. Mostrar matriz
    mostrarMatriz(mat, filas, columnas);

    // 3. Buscar por código
    char codigo;
    cout << "Digite codigo a buscar: ";
    cin >> codigo;
    if (!buscarCodigo(mat, filas, codigo))
        cout << "Codigo no encontrado." << endl;

    // 4. Contar estudiantes por grupo
    char grupo;
    cout << "Digite grupo a contar (un solo caracter): ";
    cin >> grupo;
    cout << grupo << endl;
    cout << "Cantidad de estudiantes en grupo " << grupo << " = "
         << contarGrupo(mat, filas, grupo) << endl;

    return 0;
}
