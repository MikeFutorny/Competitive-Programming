#include <vector>
#include <iostream>

using namespace std;
#include <map>
using ll = long long;

int main(){
ll n, k, l, c, d, p, nl, np, i;

cin >> n >> k >> l >> c >> d >> p >> nl >> np;

ll portion_sault = p/np;
ll portion_drink = (k*l)/nl;

ll portion_lime = c*d;

cout << min(portion_drink, min(portion_sault,portion_lime))/n << endl;



return 0;
}