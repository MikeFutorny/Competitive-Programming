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
    ll i, j, k, m, n, a;
    ll min=0;
    ll min_index;
    ll sum=0;
    cin >> n >> k;
    vector <ll> array(n);
    for(i=0;i<k;i++){
        cin >> array[i];
        sum+=a;
    }
    min=sum;
    min_index=1;
    for(i=k;i<n;i++){
        cin >> a;
        sum =sum-array[i-k]+a;
        array[i] = a;
        if(sum<min){
            min = sum;
            min_index=i-k+2;
        }
    }

    cout << min_index << endl;



return 0;
}