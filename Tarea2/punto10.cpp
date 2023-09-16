#include <iostream>
using namespace std;

int main() {
    int entero = 10;
    double decimal = entero;

    cout << "Conversión implícita: " << decimal << endl;

    double otroDecimal = 15.75;
    int otroEntero = static_cast<int>(otroDecimal);

    cout << "Conversión explícita: " << otroEntero << endl;

    return 0;
}
