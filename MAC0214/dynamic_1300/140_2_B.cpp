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
ll i, j, n, a, b, temp, cont, globalcont=0, m;


cin >> n;

vector <ll> array(n+1);
vector <ll> positions(n+1);

for(i=0;i<n;i++){
    cin >> array[i];
    positions[array[i]] = i+1;
}

cin >> m;
ll cont_vasya=0;
ll cont_peter=0;
for(i=0;i<m;i++){
    cin >> a;
    cont_vasya+=positions[a];
    cont_peter+=n-positions[a]+1;
}

cout << cont_vasya << " " << cont_peter << endl;

return 0;
}