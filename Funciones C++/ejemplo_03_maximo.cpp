#include <iostream>
using namespace std;

int ubicaMax(int a, int b);

int main() {
    int numero_1, numero_2, maximo;
    cout << "Digite el valor numérico 1: ";
    cin >> numero_1;
    cout << "Digite el valor numérico 2: ";
    cin >> numero_2;
    maximo = ubicaMax(numero_1, numero_2);
    cout << "El mayor de los dos valores es: " << maximo << endl;
    return 0;
}

int ubicaMax(int a, int b) {
    return a > b ? a : b;
}
