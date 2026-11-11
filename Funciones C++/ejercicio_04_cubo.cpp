#include <iostream>
using namespace std;

long long cubo(int n) {
    return static_cast<long long>(n) * n * n;
}

int main() {
    int n;
    cout << "Ingrese un número entero: ";
    cin >> n;
    cout << n << " elevado al cubo es " << cubo(n) << endl;
    return 0;
}
