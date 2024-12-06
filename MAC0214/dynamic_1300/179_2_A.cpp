#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;



int main() {
    ll n, m, i, t, j, a, b;
    vector <ll> zeros;
    bool difer=false;
    ll soma=0;
    ll soma2=0;
    cin >> n;
    map <ll, ll> mapa;

    for(i=0;i<n;i++){
        cin >> a;
        if(mapa.find(a)==mapa.end()){
            mapa[a]=1;
        }
        else{
            mapa[a]++;
            if(mapa[a]>(n+1)/2){
                difer=true;
                break;
            }
        }
    }
    if(difer){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" <<endl;
    }

    return 0;
}