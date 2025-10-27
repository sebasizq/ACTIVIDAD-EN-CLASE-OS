#include <iostream>
using namespace std;

int main() {
    int filas = 2, columnas = 3;
    int **matriz = new int*[filas];
    for (int i = 0; i < filas; i++) {
        matriz[i] = new int[columnas];
    }
    cout << "la matriz:" << endl;
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            matriz[i][j] = (i + 1) + (j + 1);
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < filas; i++) {
        delete[] matriz[i];
    }
    delete[] matriz;
    cout << "Memoria liberada" << endl;
    return 0;
}
