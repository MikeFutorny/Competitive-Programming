#include <iostream>
#include <vector>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int MOD = 1073741824;
    int A = a, B = b, C = c;

    int M = A * B * C;
    vector<int> divCount(M+1, 0);

    for (int i = 1; i <= M; i++) {
        for (int j = i; j <= M; j += i) {
            divCount[j]++;
        }
    }

    long long result = 0;
    for (int i = 1; i <= A; i++) {
        for (int j = 1; j <= B; j++) {
            for (int k = 1; k <= C; k++) {
                int val = i*j*k;
                result += divCount[val];
                if (result >= MOD) result %= MOD; 
            }
        }
    }

    cout << result % MOD << "\n";
    return 0;
}
