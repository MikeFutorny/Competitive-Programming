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
    ll sum=0;
    for(i=0;i<n;i++){
        cin >> a;
        sum +=a;
    }
    if(sum%n==0){
        cout << n << endl;
    }
    else{
        cout << n-1 << endl;
    }

    return 0;
}
