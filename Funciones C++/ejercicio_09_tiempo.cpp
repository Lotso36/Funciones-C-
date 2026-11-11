#include <iostream>
using namespace std;

void tiempo(int total, int &horas, int &minutos, int &segundos) {
    horas = total / 3600;
    minutos = (total % 3600) / 60;
    segundos = total % 60;
}

int main() {
    int total, h, m, s;
    cout << "Ingrese la cantidad total de segundos: ";
    cin >> total;
    if (total < 0) {
        cout << "La cantidad no puede ser negativa." << endl;
        return 1;
    }
    tiempo(total, h, m, s);
    cout << total << " s = " << h << " h " << m << " min "
         << s << " s" << endl;
    return 0;
}
