#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    if (caracter >= 'A' && caracter <= 'Z') {
        cout << caracter << " es una letra mayúscula." << endl;
    } else {
        cout << caracter << " no es una letra mayúscula." << endl;
    }

    return 0;
}
