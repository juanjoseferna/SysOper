#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num;

    cout << "Ingrese un número no negativo: ";
    cin >> num;

    if (num < 0) {
        cout << "El factorial no está definido para números negativos." << endl;
    } else {
        unsigned long long resultado = factorial(num);
        cout << "El factorial de " << num << " es " << resultado << endl;
    }

    return 0;
}
