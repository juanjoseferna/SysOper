#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    
    return true;
}

int main() {
    int num;
    
    cout << "Ingrese un numero: ";
    cin >> num;
    
    if (isPrime(num)) {
        cout << num << " Es primo." << endl;
    } else {
        cout << num << " No es primo." << endl;
    }
    
    return 0;
}
