#include <iostream>
using namespace std;

double potencia(double base, int exponente) {
    double resultado = 1.0;
    int n = exponente < 0 ? -exponente : exponente;
    for (int i = 0; i < n; i++) resultado *= base;
    return exponente < 0 ? 1.0 / resultado : resultado;
}

int main() {
    double base;
    int exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente (entero): ";
    cin >> exponente;
    if (base == 0 && exponente < 0) {
        cout << "Operación no definida: división entre cero." << endl;
        return 1;
    }
    cout << base << " ^ " << exponente << " = "
         << potencia(base, exponente) << endl;
    return 0;
}
