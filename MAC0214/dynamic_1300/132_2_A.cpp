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


cin >> n;
vector <ll> denominador(n);
for(i=0;i<n;i++){
    cin >> denominador[i];
}

cin >> m;
vector <ll> nominador(m);
for(i=0;i<m;i++){
    cin >> nominador[i];
}
ll max=-1;
map <ll, ll> mapa;

for(i=0;i<n;i++){
    for(j=0;j<m;j++){
        ll a = nominador[j];
        ll b = denominador[i];
        if((a/b)*b==a){
            if(a/b > max){
                max = a/b;
                mapa[max] = 1;
            }
            else if(a/b==max){
                mapa[max]++;
            }
        }

    }
}
cout << mapa[max] << endl;
return 0;
}