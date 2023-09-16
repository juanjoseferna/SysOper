#include <iostream>
using namespace std;

int main() {
    cout << "Número\tOctal\tDecimal\tHexadecimal" << endl;

    for (int i = 1; i <= 10; ++i) {
        cout << i << "\t" << oct << i << "\t" << dec << i << "\t" << hex << i << endl;
    }

    return 0;
}
