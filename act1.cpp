#include <iostream>
using namespace std;

int main() {
    int edad = 404;
    cout << "Valor inicial de la variable: " << edad << endl;
    cout << "Direccion en memoria: " << &edad << endl;
    int *ptrEdad = &edad;
    *ptrEdad = 20; 
    cout << "Nuevo valor de la variable: " << edad << endl;
    cout << "Direccion usando el puntero: " << ptrEdad << endl;
    return 0;
}
