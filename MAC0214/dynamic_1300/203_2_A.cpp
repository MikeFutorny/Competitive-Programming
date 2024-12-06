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
    cin >> n >> m;
    ll min1=-1, max1=-1, min2=-1, max2=-1;

    for(i=0;i<n;i++){
        cin >> a;
        if(a<min1||min1==-1){
            min1 =a;
        }
        if(a>max1||max1==-1){
            max1=a;
        }
    }
    for(i=0;i<m;i++){
        cin >> a;
        if(a<min2||min2==-1){
            min2 =a;
        }
        if(a>max2||max2==-1){
            max2=a;
        }
    }
    if(max1<min2){
        ll limit=min2-1;
        ll limit2 = min1*2;
        if(limit2>=min2){
            cout << -1 << endl;
        }
        else{
            cout << max(limit2,max1) << endl;
        }
    }
    else{
        cout << -1 << endl;
    }


    return 0;
}
