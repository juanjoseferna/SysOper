
#include <iostream>
using namespace std;

int main() {
    char caracter;

    cout << "Ingrese un carácter: ";
    cin >> caracter;

    if (caracter >= 'a' && caracter <= 'z') {
        cout << caracter << " es una letra minúscula." << endl;
    } else {
        cout << caracter << " no es una letra minúscula." << endl;
    }

    return 0;
}
