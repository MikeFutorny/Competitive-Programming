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



int main(){
ll i, j, k, l, m, n, d;
vector <ll> rep(4);
map <ll, ll> mapa;
ll max=0;
for(i=0;i<4;i++){
    cin >> rep[i];
    if(mapa.find(rep[i])==mapa.end()){
        mapa[rep[i]] = 1;
    }
    else{
        max++;
    }
}

cout << max << endl;

return 0;
}