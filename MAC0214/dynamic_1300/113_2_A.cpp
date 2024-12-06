#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>

using ll = long long;

using namespace std;

const ll MOD = 1000000007;

bool compare(pair<ll, ll>& a, pair<ll, ll>& b) {
    if (a.first > b.first) {
        return true;
    } else if (a.first == b.first) {
        return a.second < b.second;
    }
    return false;
}

int main() {
    ll i, j, n, m, k, soma=0, x, y, a, b;
    bool flag=false;
    cin >> n >> k;
    vector<pair<ll, ll>> array(n);

    for(i=0;i<n;i++){
        cin >> a >> b;
        pair<ll, ll> par;
        par.first=a;
        par.second=b;
        array[i]=par;
    }
    
    sort(array.begin(), array.end(), compare);
    
    pair<ll, ll> target = array[k - 1];
    ll count = 0;
    for (i = 0; i < n; i++) {
        if (array[i].first == target.first && array[i].second == target.second) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
