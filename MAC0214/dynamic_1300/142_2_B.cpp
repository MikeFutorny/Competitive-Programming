#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using ll = long long;

using namespace std;

vector<bool> generatePrimes(ll limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false; 
    for (ll i = 2; i * i <= limit; i++) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= limit; j += i) {
                isPrime[j] = false;
            }
        }
    }
    return isPrime;
}


int main(){
ll a, b, c, i, temp, soma=1, global, k, n, j,cont=0;

cin >> n;
vector<bool> isPrime = generatePrimes(1000000);

for(i=0;i<n;i++){
    cin >> a;
    if(a==1){
        cout << "NO" << endl;
    }
    else{
        ll root = sqrt(a);
        if(isPrime[root]){
            if(root*root==a){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }

}

return 0;
}