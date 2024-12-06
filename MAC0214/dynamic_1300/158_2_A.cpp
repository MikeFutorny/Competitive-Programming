#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;



int main(){

ll n, t, i, j, a, b;


cin >> a >> b >> n;

bool flag = true;
vector <ll> tests;
for(j=0;j<10;j++){
    if((a*10+j)%b==0){
        a = a*10+j;
        flag =false;
        break;
    }
}

if(flag){
    cout << -1 << endl;
}
else{
    cout << a;
    for(j=0;j<n-1;j++){
        cout << 0;
    }
    cout << endl;
}

return 0;
}