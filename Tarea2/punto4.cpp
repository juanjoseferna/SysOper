#include <iostream>
using namespace std;

double potencia(double base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else if (exponente > 0) {
        return base * potencia(base, exponente - 1);
    } else {
        return 1 / (base * potencia(base, -exponente - 1));
    }
}

int main() {
    double base;
    int exponente;

    cout << "Ingrese la base: ";
    cin >> base;

    cout << "Ingrese el exponente: ";
    cin >> exponente;

    double resultado = potencia(base, exponente);
    cout << base << " elevado a la potencia " << exponente << " es " << resultado << endl;

    return 0;
}
