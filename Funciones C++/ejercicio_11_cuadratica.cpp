#include <iostream>
#include <cmath>
using namespace std;

void ecuacionCuadratica(double a, double b, double c) {
    if (a == 0) {
        cout << "No es una ecuación cuadrática (a = 0)." << endl;
        return;
    }
    double d = b * b - 4 * a * c;
    if (d > 0) {
        cout << "Raíces reales: x1 = " << (-b + sqrt(d)) / (2 * a)
             << ", x2 = " << (-b - sqrt(d)) / (2 * a) << endl;
    } else if (d == 0) {
        cout << "Raíz doble: x = " << -b / (2 * a) << endl;
    } else {
        cout << "Raíces complejas: x = " << -b / (2 * a) << " ± "
             << sqrt(-d) / (2 * fabs(a)) << "i" << endl;
    }
}

int main() {
    double a, b, c;
    cout << "Ingrese los coeficientes a, b y c: ";
    cin >> a >> b >> c;
    ecuacionCuadratica(a, b, c);
    return 0;
}
