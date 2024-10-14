#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using ll = long long;
using namespace std;

int main(){
ll t, i, j, n, r, temp,x;
cin >> t;

for(i=0;i<t;i++){
    cin >> n;
    cin >> x;
    ll sum = 0;
    ll maximo = -1;
    for(j=0;j<n;j++){
        cin >> temp;
        sum += temp;
        if(maximo==-1 || temp>maximo){
            maximo = temp;
        }
    }
    ll temp2;
    if(sum != (sum/x)*x){
        temp2 = sum/x+1;
    }
    else{
        temp2 = sum/x;
    }
    cout << max(temp2, maximo) << endl;


}

return 0;
}