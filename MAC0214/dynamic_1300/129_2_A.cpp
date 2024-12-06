#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
using ll = long long;

using namespace std;



int main(){
ll i, j, n;
cin >> n;
ll min = -1, index;
bool flag = true;
for(i=0;i<n;i++){
    cin >> j;
    if(j<min || min==-1){
        index = i+1;
        min = j;
        flag = true;
    }
    else{
        if(j==min){
            flag = false;
        }
        else{
            continue;
        }
    }
}
if(flag){
    cout << index << endl;
}
else{
    cout << "Still Rozdil" << endl;
}

return 0;
}