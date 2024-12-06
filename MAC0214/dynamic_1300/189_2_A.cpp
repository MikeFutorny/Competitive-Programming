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


cin >> n;

ll conta_quatro=0;

while(n>0){
    temp = n%10;
    n=n/10;
    if(temp==4){
        conta_quatro++;
        if(conta_quatro>2){
            flag = false;
            break;
        }
    }
    else if(temp==1){
        conta_quatro=0;
    }
    else{
        flag = false;
        break;
    }
}
if(flag && conta_quatro==0){
    cout << "YES" << endl;
}
else{
    cout <<  "NO" << endl;
}

return 0;
}