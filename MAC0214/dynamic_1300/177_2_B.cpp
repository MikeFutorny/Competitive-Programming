#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using ll = long long;

using namespace std;

int main(){
    ll i, j, n, m, d;
    cin >> n >> m >> d;
    vector<ll> array(n*m);
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin >> array[i*m+j];
        }
    }
    for(i=1;i<n*m;i++){
        if((array[i]-array[0])%d!=0){
            cout << -1 << "\n";
            return 0;
        }
    }
    sort(array.begin(), array.end());
    ll median = array[(n*m)/2];
    ll ans=0;
    for(i=0;i<n*m;i++){
        ans += llabs(array[i]-median)/d;
    }
    cout << ans << "\n";
    return 0;
}
