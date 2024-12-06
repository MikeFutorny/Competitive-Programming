#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
using namespace std;

using ll = long long;

int main(){

ll i, j, n, m, k, t, temp, index;

cin >> t;

for(index=0;index<t;index++){

    cin >> n >> k;
    vector <ll> brands(k+1, 0);
    ll brand, cost;

    for(i=0;i<k;i++){
        cin >> brand >> cost;
        brands[brand] += cost;
    }
    sort(brands.begin(), brands.end(), greater <int> ());
    ll sum=0;
    for(j=0;j<n;j++){
        if(j==k){
            break;
        }
        sum += brands[j];
    }
    cout << sum << endl;
}


return 0;
}