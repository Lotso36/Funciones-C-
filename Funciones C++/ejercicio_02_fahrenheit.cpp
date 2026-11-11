#include <iostream>
#include <iomanip>
using namespace std;

double convertirFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32.0;
}

int main() {
    double c;
    cout << "Ingrese la temperatura en grados Celsius: ";
    cin >> c;
    cout << fixed << setprecision(2);
    cout << c << " °C equivalen a "
         << convertirFahrenheit(c) << " °F" << endl;
    return 0;
}
