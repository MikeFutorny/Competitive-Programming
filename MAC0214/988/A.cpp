#include <iostream>
#include <vector>
#include <map>

using ll = long long;
using namespace std;

int main(){
ll i, j,n ,m,k,t, a;

cin >> t;
for(i=0;i<t;i++){
    cin >> n;
    ll sum=0;
    map <ll, ll> mapa;

    for(j=0;j<n;j++){
        cin >> a;
        if(mapa.find(a)==mapa.end()){
            mapa[a]=1;
        }
        else if(mapa[a]==1){
            sum++;
            mapa[a]=0;
        }
        else if(mapa[a]==0){
            mapa[a]++;
        }
    }
    cout << sum << endl;
}



return 0;
}