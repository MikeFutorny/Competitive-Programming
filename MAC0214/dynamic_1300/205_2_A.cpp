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
    for(i=0;i<n;i++){
        cin >> a >> b;
        soma+=a;
        soma2+=b;
        if(a%2!=b%2){
            difer=true;
        }
    }
    if(soma%2==0){
        if(soma2%2==0){
            cout << 0 << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    else{
        if(soma2%2!=0){
            if(difer){
                cout << 1<< endl;
            }
            else{
                cout << -1 << endl;
            }
        }
        else{
            cout << -1 << endl;
        }
    }


    return 0;
}