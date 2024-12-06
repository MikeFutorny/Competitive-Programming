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
ll a, b, c, i, temp, soma=0, global, k, n, m;
bool flag = true;


cin >> n >> m;

for(i=0;i<=sqrt(n);i++){
    if((n-i*i) * (n-i*i) + i == m){
        soma++;
    }
}
cout << soma << endl;
return 0;
}