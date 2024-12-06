#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;

const int LIMIT = 10000000;

vector<int> generatePrimes(int n) {
    vector<int> primes;
    vector<bool> isPrime(LIMIT + 1, true);

    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= LIMIT && primes.size() < n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i * 2; j <= LIMIT; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;

    vector<int> primes = generatePrimes(n);
    for (int i = 0; i < n; i++) {
        cout << primes[i] << " ";
    }
    cout << endl;

    return 0;
}