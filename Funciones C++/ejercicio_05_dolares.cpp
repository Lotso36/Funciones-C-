#include <iostream>
#include <iomanip>
using namespace std;

double convierteDolares(double soles, double tipoCambio) {
    return soles / tipoCambio;
}

int main() {
    double soles, tc;
    cout << "Ingrese el monto en soles: ";
    cin >> soles;
    cout << "Ingrese el tipo de cambio (soles por dólar): ";
    cin >> tc;
    if (tc <= 0) {
        cout << "El tipo de cambio debe ser positivo." << endl;
        return 1;
    }
    cout << fixed << setprecision(2);
    cout << "S/ " << soles << " equivalen a US$ "
         << convierteDolares(soles, tc) << endl;
    return 0;
}
