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
ll i, j, n, a, b, temp, cont=0, globalcont=0, m, max=-1, min_index=-1;
string s;

cin >> n >> m;
vector<ll> planes(m);

for(i=0;i<m;i++){
    cin >> planes[i];
}

ll max_earnings = 0;
vector<ll> max_planes = planes;
for(i=0;i<n;i++){
    auto max_it = max_element(max_planes.begin(), max_planes.end());
    max_earnings += *max_it;
    (*max_it)--;
    if(*max_it == 0) max_planes.erase(max_it);
}

ll min_earnings = 0;
vector<ll> min_planes = planes;
for(i=0;i<n;i++){
    auto min_it = min_element(min_planes.begin(), min_planes.end(), [](ll x, ll y){ return (x > 0 && y > 0) ? x < y : y == 0; });
    min_earnings += *min_it;
    (*min_it)--;
    if(*min_it == 0) min_planes.erase(min_it);
}

cout << max_earnings << " " << min_earnings << endl;

return 0;
}
