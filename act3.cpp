#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {1, 2, 3, 4, 5};
    int *ptr = numeros;
    cout << "Direccion del arreglo: " << numeros << endl;
    cout << "Direccion del puntero: " << ptr << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Antes: numeros[" << i << "] = " << *(ptr + i) << endl;
        *(ptr + i) += 1; 
        cout << "Despues: numeros[" << i << "] = " << *(ptr + i) << endl;
    }
    return 0;
}
