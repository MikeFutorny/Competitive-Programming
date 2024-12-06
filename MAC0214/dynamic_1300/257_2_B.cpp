#include <iostream>
#include <vector>
#include <algorithm>

using ll = long long;

using namespace std;

const ll MOD = 1000000007;

int main() {
    ll i, j, n, m, k, soma=0, x, y;
    bool flag=false;
    cin >> x >> y >> n;
    ll resto = n % 6;
    x = (x%MOD+MOD)%MOD;
    y = (y%MOD+MOD)%MOD;

    if(resto==1){
        cout << x << endl;
    }
    if(resto==2){
        cout << y << endl;
    }
    if(resto==3){
        cout << (y-x+MOD)%MOD << endl;
    }
    if(resto==4){
        cout << (-x+MOD)%MOD << endl;
    }
    if(resto==5){
        cout << (-y+MOD)%MOD << endl;
    }
    if(resto==0){
        cout << (x-y+MOD)%MOD << endl;
    }

    return 0;
}
