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
    ll n, a, b, i, j, m, c;
    cin >> n;
    vector <ll> array(n);
    vector <ll> helper(n);
    vector <ll> soma1(n);
    vector <ll> soma2(n);

    for(i=0;i<n;i++){
        cin >> array[i];
        helper[i]=array[i];
        if(i>0){
            soma1[i] = soma1[i-1]+array[i];
        }
        else{
            soma1[i] = array[i];
        }
    }

    sort(helper.begin(), helper.end());
    for(i=0;i<n;i++){
        if(i>0){
            soma2[i] = soma2[i-1] + helper[i];
        }
        else{
            soma2[i] = helper[i];
        }
    }

    cin >> m;
    set <ll> encontrados;
    ll sum=0;

    for(i=0;i<m;i++){
        cin >> a >> b >>c;
        if(a==1){
            if(b==1){
                cout << soma1[c-1] << endl;
            }
            else{
                cout << soma1[c-1]-soma1[b-2] << endl;
            }
        }
        else{
            if(b==1){
                cout << soma2[c-1] << endl;
            }
            else{
                cout << soma2[c-1]-soma2[b-2] << endl;
            }

        }


    }

    return 0;
}
