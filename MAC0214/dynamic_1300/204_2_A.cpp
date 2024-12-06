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
ll zero_count=0;
ll five_count=0;
ll last_viable=-1;

for(i=0;i<n;i++){
    cin >> temp;
    if(temp==0){
        zero_count++;
    }
    else{
        five_count+=5;
        if(five_count%9==0){
            last_viable=five_count/5;
        }
    }
}
if(last_viable!=-1 && zero_count>0){
    while(last_viable>0){
        cout << 5;
        last_viable--;
    }
    while(zero_count>0){
        cout << 0;
        zero_count--;
    }
}
else{
    if(zero_count>0){
        cout << 0;
    }
    else{
        cout << -1;
    }
}
cout << endl;
return 0;
}