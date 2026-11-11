#include <iostream>
using namespace std;

void cambio(int monto) {
    const int valores[] = {100, 50, 20, 10, 5, 2, 1};
    for (int i = 0; i < 7; i++) {
        int cantidad = monto / valores[i];
        monto %= valores[i];
        if (cantidad > 0) {
            cout << cantidad
                 << (valores[i] >= 10 ? " billete(s)" : " moneda(s)")
                 << " de S/ " << valores[i] << endl;
        }
    }
}

int main() {
    int monto;
    do {
        cout << "Ingrese un monto entero entre 1 y 100: ";
        cin >> monto;
    } while (monto < 1 || monto > 100);
    cambio(monto);
    return 0;
}
