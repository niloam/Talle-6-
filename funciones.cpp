#include "funciones.h"

float calcularPromedio(int arr[], int n) {
    float suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma / n;
}

int encontrarMayor(int arr[], int n) {
    int mayor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mayor) mayor = arr[i];
    return mayor;
}

int encontrarMenor(int arr[], int n) {
    int menor = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < menor) menor = arr[i];
    return menor;
}
