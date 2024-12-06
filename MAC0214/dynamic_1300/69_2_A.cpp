#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using ll = long long;

using namespace std;

bool is_prime(ll n){
    ll i;
    for(i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;

}


int main(){

ll n, m, i;

cin >> n >> m;
i=n+1;
bool flag = false;

while(i<=m){
    if(is_prime(i)){
        if(i==m){
            flag = true;
        }
        else{
            break;
        }
    }
    i++;
}
if(flag){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}
return 0;

}