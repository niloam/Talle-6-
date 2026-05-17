#ifndef OPERACIONES_H
#define OPERACIONES_H

void suma(int a, int b, int &resultado);
void resta(int a, int b, int &resultado);
void multiplica(int a, int b, int &resultado);
void division(int a, int b, int &cociente, int &residuo);

void sumaArreglo(int arr[], int n, int &resultado);
void sumaMatriz(int mat[][3], int filas, int columnas, int &resultado);

#endif
