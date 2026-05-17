#include <iostream>
using namespace std;

void muestraArreglo(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int busquedaL(int arr[], int n, int valor) {
    for (int i = 0; i < n; i++)
        if (arr[i] == valor) return i;
    return -1;
}

void burbuja(int arr[], int n) {
    for (int i = 0; i < n-1; i++)
        for (int j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
}

int main() {
    int arr[8];
    cout << "Digite 8 numeros: ";
    for (int i = 0; i < 8; i++) cin >> arr[i];

    cout << "Arreglo original: ";
    muestraArreglo(arr, 8);

    burbuja(arr, 8);
    cout << "Arreglo ordenado: ";
    muestraArreglo(arr, 8);

    int valor;
    cout << "Digite valor a buscar: ";
    cin >> valor;
    int pos = busquedaL(arr, 8, valor);
    if (pos != -1) cout << "Encontrado en posicion " << pos << endl;
    else cout << "No encontrado" << endl;

    return 0;
}
