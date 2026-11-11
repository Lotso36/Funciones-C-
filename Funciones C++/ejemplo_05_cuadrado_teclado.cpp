#include <iostream>
using namespace std;

int cuadrado(int numero) {
    numero = numero * numero;
    return numero;
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    int resultado = cuadrado(numero);
    cout << "El cuadrado por valor es: " << resultado << endl;
    cout << "El valor de numero en main sigue siendo: " << numero << endl;
    return 0;
}
