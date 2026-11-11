#include <iostream>
using namespace std;

int sumaDigitos(int n) {
    if (n < 0) n = -n;
    int suma = 0;
    while (n > 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int main() {
    int numero;
    cout << "Ingrese un número entero: ";
    cin >> numero;
    cout << "La suma de los dígitos de " << numero << " es "
         << sumaDigitos(numero) << endl;
    return 0;
}
