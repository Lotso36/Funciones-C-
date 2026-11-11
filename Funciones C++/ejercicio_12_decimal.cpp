#include <iostream>
#include <cmath>
using namespace std;

double parteDecimal(double x) {
    double absoluto = fabs(x);
    return absoluto - floor(absoluto);
}

int main() {
    double numero;
    cout << "Ingrese un número flotante: ";
    cin >> numero;
    cout << "La parte decimal de " << numero << " es "
         << parteDecimal(numero) << endl;
    return 0;
}
