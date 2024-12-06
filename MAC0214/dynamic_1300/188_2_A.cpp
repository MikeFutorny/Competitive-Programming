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
ll a, b, c, i, temp, soma=0, global, k, n;
bool flag = true;

cin >> n >> k;

if(n%2==0){
    if(k<=n/2){
        cout << (k-1)*2+1 << endl;
    }
    else{
        cout << 2*(k-n/2) << endl;
    }
}
else{
    if(k<=n/2+1){
        cout << (k-1)*2+1 << endl;
    }
    else{
        cout << 2*(k-n/2-1) << endl;
    }
}
return 0;
}