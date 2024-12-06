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
ll i, j, n, a, b, temp, cont, globalcont=0, s;

cin >> s >>n;
vector <pair<ll, ll> >  forcas(n);

for(i=0;i<n;i++){
    cin >> a >> b;
    forcas[i].first=a;
    forcas[i].second=b;
}

sort(forcas.begin(), forcas.end());

bool flag=true;

for(i=0;i<n;i++){
    if(s>forcas[i].first){
        s+=forcas[i].second;
    }
    else{
        flag = false;
        break;
    }
}
if(flag){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}

return 0;
}