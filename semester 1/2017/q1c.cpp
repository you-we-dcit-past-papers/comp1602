#include <iostream>

using namespace std;

int main() {
    int primes[100] = {0}, num, n, idx = 0;
    bool isPrime;

    cout << "Enter n: ";
    cin >> n;

    for (int i = 2; i <= n; i++) {
        isPrime = true;
        for (int j = 0; j < idx && primes[j]*primes[j] <= i; j++) 
            if (i % primes[j] == 0)    isPrime = false;
        if (isPrime) {
            primes[idx++] = i;
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
