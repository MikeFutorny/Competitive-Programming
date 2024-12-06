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
ll i, j, n, m, soma=0, k, a;

cin >> n >> k;
vector <ll> numeros(n);
for(i=0;i<n;i++){
    cin >> a;
    numeros[i] = a;
}

bool flag =true;
ll igual = numeros[k-1];
for(i=k-1;i<n;i++){
    if(numeros[i]!=igual){
        flag = false;
        break;
    }
}
if(!flag){
    cout << -1 << endl;
}

else{
ll last=-1;
for(i=0;i<k-1;i++){
    if(numeros[i]!=igual){
        last = i;
    }
}

cout << last+1 << endl;
}


return 0;
}