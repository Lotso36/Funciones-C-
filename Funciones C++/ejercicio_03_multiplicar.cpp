#include <iostream>
#include <iomanip>
using namespace std;

float multiplicar(float a, float b) {
    return a * b;
}

int main() {
    float x, y;
    cout << "Ingrese el primer valor: ";
    cin >> x;
    cout << "Ingrese el segundo valor: ";
    cin >> y;
    cout << fixed << setprecision(2);
    cout << x << " x " << y << " = " << multiplicar(x, y) << endl;
    return 0;
}
