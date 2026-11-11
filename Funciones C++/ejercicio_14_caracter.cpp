#include <iostream>
#include <cctype>
using namespace std;

void clasificaCaracter(char c) {
    unsigned char u = static_cast<unsigned char>(c);
    if (isalpha(u)) {
        char m = static_cast<char>(tolower(u));
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') {
            cout << "'" << c << "' es una vocal." << endl;
        } else {
            cout << "'" << c << "' es una consonante." << endl;
        }
    } else {
        cout << "'" << c << "' es otro tipo de carácter." << endl;
    }
}

int main() {
    char c;
    cout << "Ingrese un carácter: ";
    cin >> c;
    clasificaCaracter(c);
    return 0;
}
