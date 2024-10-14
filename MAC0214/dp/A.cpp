#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;

void Recursion(vector<ll> &moedas, vector<ll> &dp, ll currentSum, ll currentCoins, ll x, ll n){
    ll i;
    if(dp[currentSum]<currentCoins){
        return;
    }
    for(i=0;i<n;i++){
        if(currentSum + moedas[i] <= x){
            if (dp[currentSum + moedas[i]] == -1 || dp[currentSum + moedas[i]] > currentCoins + 1){
                dp[currentSum + moedas[i]] = currentCoins + 1;
                Recursion(moedas, dp, currentSum + moedas[i], currentCoins + 1, x, n);
            }
        }
    }
}

int main() {
    ll x, n, i;
    cin >> n >> x;
    vector<ll> moedas(n);
    vector<ll> dp(x + 1, -1);
    for(i=0;i<n;i++){
        cin >> moedas[i];
    }
    sort(moedas.begin(), moedas.end(), greater<int>());
    dp[0] = 0;
    Recursion(moedas, dp, 0, 0, x, n);
    if(dp[x] == -1){
        cout << -1 << endl;
    } 
    else{
        cout << dp[x] << endl;
    }
    return 0;
}