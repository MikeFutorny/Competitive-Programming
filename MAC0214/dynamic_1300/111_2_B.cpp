#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <set>
using ll = long long;

using namespace std;

int main(){
    ll i, j, k, m, n, a, b;
    ll min=-1, max=-1;
    ll index =-1;
    string s;
    cin >> n;
    cin >> s;
    vector <ll> primeiro(n);
    vector <ll> segundo(n);
    for(i=0;i<n;i++){
        primeiro[i]=s[i]-'0';
        segundo[i]=s[n+i]-'0';
    }
    sort(primeiro.begin(), primeiro.end());
    sort(segundo.begin(), segundo.end());
    bool flag=true;

    for(i=n-1;i>=0;i--){
        if(primeiro[i]>=segundo[i]){
            flag =false;
            break;
        }
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        flag =true;
        for(i=0;i<n;i++){
            if(primeiro[i]<=segundo[i]){
                flag =false;
                break;
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

return 0;
}