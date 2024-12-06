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

cin >>n;
vector <pair<ll, ll> > points(n);
vector <vector <ll> > matriz(2001, vector<ll> (2001, 0));

for(i=0;i<n;i++){
    cin >> a; 
    cin >> b;
    points[i] = {a + 1000, b + 1000};
    matriz[a + 1000][b + 1000] = 1;
}

for(i=0;i<n;i++){
    ll x = points[i].first, y = points[i].second;
    bool left = false, right = false, up = false, down = false;

    for(j=0;j<n;j++){
        if(points[j].first < x && points[j].second == y) left = true;
        if(points[j].first > x && points[j].second == y) right = true;
        if(points[j].first == x && points[j].second > y) up = true;
        if(points[j].first == x && points[j].second < y) down = true;

        if(left && right && up && down) break; 
    }

    if(left && right && up && down) globalcont++;
}

cout << globalcont << endl;

return 0;
}
