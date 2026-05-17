#include <iostream>
using namespace std;

void mostraArreglo(int arr[], int n) {
    cout << "Arreglo: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int sumarElemento(int arr[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) suma += arr[i];
    return suma;
}

int contarPar(int arr[], int n) {
    int cont = 0;
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0) cont++;
    return cont;
}

int main() {
    int arr[10];
    cout << "Digite 10 numeros: ";
    for (int i = 0; i < 10; i++) cin >> arr[i];

    mostrarArreglo(arr, 10);
    cout << "Suma = " << sumarElementos(arr, 10) << endl;
    cout << "Cantidad de pares = " << contarPares(arr, 10) << endl;

    return 0;
}
