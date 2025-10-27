#include <iostream>
using namespace std;

int main() {
    int num = 24;
    int *puntero = &num;
    int &ref = num;
    cout << "Valor original: " << num << endl;
    *puntero = 25; 
    cout << "Valor despues de usar puntero: " << num << endl;
    ref = 26; 
    cout << "Valor despues de usar referencia: " << num << endl;
    cout << "Direccion de la variable: " << &num << endl;
    cout << "Direccion guardada en puntero: " << puntero << endl;
    cout << "Direccion de la referencia: " << &ref << endl;
    return 0;
}
