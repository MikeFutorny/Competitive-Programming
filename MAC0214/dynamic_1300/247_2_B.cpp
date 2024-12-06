#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>
#include <cmath>

using ll = long long;

using namespace std;



int main(){
    ll i, j, max_happiness = 0;
    vector<vector<ll>> matriz(5, vector<ll>(5));

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            cin >> matriz[i][j];
        }
    }

    vector<ll> p = {0,1,2,3,4};
    do {
        ll sum=0;
        sum += matriz[p[0]][p[1]]+matriz[p[1]][p[0]];
        sum += matriz[p[1]][p[2]]+matriz[p[2]][p[1]];
        sum += (matriz[p[2]][p[3]]+matriz[p[3]][p[2]])*2;
        sum += (matriz[p[3]][p[4]]+matriz[p[4]][p[3]])*2;
        if(sum>max_happiness) max_happiness=sum;
    } while(next_permutation(p.begin(), p.end()));

    cout << max_happiness << "\n";
   
    return 0;
}
