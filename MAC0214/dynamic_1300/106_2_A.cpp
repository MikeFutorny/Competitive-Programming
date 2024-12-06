#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
#include <algorithm>
using ll = long long;

using namespace std;



int main(){
ll i, j, n, m, soma=0, cont=0, k;

cin >> k;
vector <ll> array(12);
for(i=0;i<12;i++){
   cin >> array[i];
}
sort(array.begin(), array.end(), greater<int>());

bool flag = true;
for(i=0;i<12;i++){
    if(soma>=k){
        flag=false;
        break;
    }
    else{
        soma +=array[i];
    }
}
if(!flag){
    cout << i << endl;
}
else{
    if(soma>=k){
        cout << 12 << endl;
    }
    else{
        cout << -1 << endl;
    }
}


return 0;
}