#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
#include <algorithm>
using ll = long long;

using namespace std;



int main(){
ll i, j, n, m, soma=0, cont=0, k;




cin >> n >> m;
vector <ll> bons;
for(i=0;i<n;i++){
    cin >> k;
    if(k<0){
        bons.push_back(k);
    }
}

sort(bons.begin(), bons.end());

if(m>=bons.size()){
    for(i=0;i<bons.size();i++){
        soma+=bons[i];
    }
}
else{
    for(i=0;i<m;i++){
        soma+=bons[i];
    }
}
cout << (-1)*soma << endl;

return 0;
}