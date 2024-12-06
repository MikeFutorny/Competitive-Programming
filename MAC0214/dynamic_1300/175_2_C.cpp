#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;



int main() {
    ll n, m, i, t, j, a;
    vector <ll> zeros;
    cin >> n;
    vector <ll> array(n);    
    for(i=0;i<n;i++){
        cin >> a;
        array[i] = a;
    }
    sort(array.begin(), array.end());
    ll distance=0;
    for(i=0;i<n;i++){
        distance += abs(array[i]-(i+1));
    }
    cout << distance << endl;
    return 0;
}