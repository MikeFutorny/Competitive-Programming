#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <set>
using ll = long long;

using namespace std;

int main(){
    ll n, a, b, i, j, m;
    cin >> n >> m;
    vector <ll> array(n+1);
    vector <ll> helper(n+1,-1);
    for(i=1;i<=n;i++){
        cin >> array[i];
    }
    set <ll> encontrados;
    ll sum=0;
    for(i=n;i>=1;i--){
        if(encontrados.find(array[i])==encontrados.end()){
            sum++;
            encontrados.insert(array[i]);
            helper[i]=sum;
        }
        else{
            helper[i] = helper[i+1];
        }    
    }
    for(i=0;i<m;i++){
        cin >> a;
        cout << helper[a] << endl;
    }

    return 0;
}
