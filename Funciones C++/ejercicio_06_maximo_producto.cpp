#include <iostream>
using namespace std;

int maximo(const int v[], int n) {
    int max = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > max) max = v[i];
    }
    return max;
}

long long producto(const int v[], int n) {
    long long p = 1;
    for (int i = 0; i < n; i++) p *= v[i];
    return p;
}

int main() {
    int valores[5];
    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valores[i];
    }
    cout << "Valor máximo: " << maximo(valores, 5) << endl;
    cout << "Producto: " << producto(valores, 5) << endl;
    return 0;
}
