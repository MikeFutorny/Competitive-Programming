#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
using ll = long long;
using namespace std;
int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    ll n, m, i, t, j, a;
    string s;
    cin >> n;
    map<ll, ll> mapa;
    vector<pair<ll, ll>> output;
    for(i=0; i<2*n; i++){
        cin >> a;
        if(mapa.find(a)==mapa.end()){
            mapa[a] = i+1;
        }
        else{
            pair<ll,ll> par;
            par.first = mapa[a];
            par.second = i+1;
            output.push_back(par);
            mapa.erase(a);
        }
    }
    bool flag=true;
    if(!mapa.empty()){
        cout << -1 << "\n";
    }
    else{
        for(i=0;i<(ll)output.size();i++){
            cout << output[i].first << " " << output[i].second << "\n";
        }
    }
    return 0;
}
