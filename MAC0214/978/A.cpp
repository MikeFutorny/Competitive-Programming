#include <iostream>
#include <vector>
#include <map>

using ll = long long;
using namespace std;

int main(){
ll t, i, j, n, r, temp;
cin >> t;

for(i=0;i<t;i++){
    cin >> n;
    cin >> r;
    ll sum = 0;
    ll usados = 0;
    ll total = 0;
    for(j=0;j<n;j++){
        cin >> temp;
        sum += temp%2;
        usados += temp/2;
        total += temp;
    }
    if(r-usados>sum){
        cout << total << endl;
    }
    else{
        cout << total - 2*(sum-(r-usados)) << endl;
    }

}





return 0;
}