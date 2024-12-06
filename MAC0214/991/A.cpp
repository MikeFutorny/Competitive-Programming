#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;


int main() {
    ll n, m, i, t, j;
    string s;
    cin >> t;
    for(j=0;j<t;j++){
        cin >> n >> m;
        vector <ll> comprido(n);

        for(i=0;i<n;i++){
            cin >> s;
            comprido[i] = s.length();
        }
        
        ll sum=0;
        ll cont=0;
        for(i=0;i<n;i++){
            sum+=comprido[i];
            cont++;
            if(sum>m){
                cont--;
                break;
            }
            if(sum==m){
                break;
            }
        }


        cout << cont << endl;
    }
    return 0;
}