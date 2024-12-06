#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
using ll = long long;

using namespace std;



int main() {
    ll n, m, i, t, j, a;

    cin >> n;
    ll pointer1, pointer2, pointer3;
    ll sum=0;
    for (pointer1 = 1; pointer1 < n - 1; pointer1++) {
        for (pointer2 = pointer1; pointer2 < n; pointer2++) {
            ll pointer3_sqr = pointer1 * pointer1 + pointer2 * pointer2;
            ll pointer3 = sqrt(pointer3_sqr); 
            if (pointer3 * pointer3 == pointer3_sqr && pointer3 <= n) {
                sum++;
            }
        }
    }
    cout << sum << endl;
    
    return 0;
}