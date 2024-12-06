#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using ll = long long;

using namespace std;

int main(){
    ll n, a, b, i, j;
    cin >> n;
    vector<ll> arr(n), sorted_arr(n);

    for(i=0;i<n;i++){
        cin >> arr[i];
        sorted_arr[i]=arr[i];
    }

    sort(sorted_arr.begin(), sorted_arr.end());

    for(i=0;i<n;i++){
        ll pos = (ll)(lower_bound(sorted_arr.begin(), sorted_arr.end(), arr[i]) - sorted_arr.begin()) + 1;
        arr[i] = pos;
    }

    ll L=-1, R=-1;
    for(i=0;i<n;i++){
        if(arr[i] != i+1){
            L = i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(arr[i] != i+1){
            R = i;
            break;
        }
    }

    if(L==-1 && R==-1){
        cout << "yes" << endl << 1 << " " << 1 << endl;
        return 0;
    }

    reverse(arr.begin()+L, arr.begin()+R+1);

    bool ok = true;
    for(i=0;i<n;i++){
        if(arr[i]!=i+1) {
            ok=false; 
            break;
        }
    }

    if(ok) {
        cout << "yes" << endl << L+1 << " " << R+1 << endl;
    } else {
        cout << "no" << endl;
    }

    return 0;
}
