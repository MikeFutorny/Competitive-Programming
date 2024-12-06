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
ll a, b, c, i, temp, soma=1, global, k, n, j;

cin >> n;

pair <ll, ll> prev;
ll max=1;
prev.first=-1;
for(i=0;i<n;i++){
    cin >> a >> b;
    if(prev.first==-1){
        prev.first=a;
        prev.second=b;
    }
    else{
        if(a==prev.first && b==prev.second){
            soma++;
            if(soma>max){
                max = soma;
            }
        }
        else{
            if(soma>max){
                max = soma;
            }
            soma=1;
        }
        prev.first=a;
        prev.second=b;
    }
}
cout << max << endl;
return 0;
}