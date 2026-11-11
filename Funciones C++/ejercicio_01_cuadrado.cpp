#include <iostream>
using namespace std;

double calculaArea(double lado);
double calculaPerimetro(double lado);

int main() {
    double lado;
    cout << "Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;
    if (lado <= 0) {
        cout << "El lado debe ser mayor que cero." << endl;
        return 1;
    }
    cout << "Área: " << calculaArea(lado) << endl;
    cout << "Perímetro: " << calculaPerimetro(lado) << endl;
    return 0;
}

double calculaArea(double lado) { return lado * lado; }

double calculaPerimetro(double lado) { return 4 * lado; }
