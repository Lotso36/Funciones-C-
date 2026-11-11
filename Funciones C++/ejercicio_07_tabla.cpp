#include <iostream>
using namespace std;

void tablaMultiplicar(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    cout << "Ingrese un número natural: ";
    cin >> n;
    if (n < 1) {
        cout << "El número debe ser natural (mayor o igual a 1)." << endl;
        return 1;
    }
    tablaMultiplicar(n);
    return 0;
}
