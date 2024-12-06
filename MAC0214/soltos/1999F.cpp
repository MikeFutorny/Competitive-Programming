#include <iostream>
#include <vector>
using namespace std;

using ll=long long;
const ll MOD = 1000000007;

ll choose(ll n, ll m){
    if(m>n){
        return 0;
    }
    if(m==0){
        return 1;
    }
    ll i, j, product1=1, product2=1;
    for(i=n;i>n-m;i--){
        product1 = (product1*(i))% MOD;
        product2=(product2*(n-i+1))% MOD;
    }
    return product1/product2;
}
int main(){

ll t, i, j, n, k, a;
cin >> t;
for(i=0;i<t;i++){
    ll numero_1=0;
    ll numero_0=0;
    cin >> n >> k;
    for(j=0;j<n;j++){
        cin >> a;
        if(a==0){
            numero_0++;
        }
        else{
            numero_1++;
        }
    }
    ll temp = k;
    ll soma=0;

    while(temp>k/2){
        if(k-temp > numero_0){
            break;
        }
        soma = (soma % MOD) + (choose(numero_1, temp)% MOD)*(choose(numero_0, k-temp)% MOD);
        temp--;
        cout << "a : " << soma << endl;
    }
    cout <<  soma% MOD<<endl;

}


return 0;
}