#include <iostream>
#include <iomanip>
using namespace std;

const double PI = 3.14159265358979;

double perimetroCirculo(double radio) { return 2 * PI * radio; }

double areaCirculo(double radio) { return PI * radio * radio; }

int main() {
    double radio;
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;
    if (radio <= 0) {
        cout << "El radio debe ser mayor que cero." << endl;
        return 1;
    }
    cout << fixed << setprecision(2);
    cout << "Perímetro: " << perimetroCirculo(radio) << endl;
    cout << "Área: " << areaCirculo(radio) << endl;
    return 0;
}
