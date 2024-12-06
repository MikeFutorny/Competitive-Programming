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
ll i, j, n, a, b, temp, x1, x2, y1, y2, t;
string s;
cin >> t >> x1 >> y1 >> x2 >> y2;

cin >> s;
if(x1==x2 && y1==y2){
    cout << 0 << endl;
}
else{
    bool flag =false;
    for(i=0;i<t;i++){
        if(s[i]=='S'){
            if(y1>y2){
                y1--;
            }
        }
        if(s[i]=='N'){
            if(y1<y2){
                y1++;
            }
        }
        if(s[i]=='W'){
            if(x1>x2){
                x1--;
            }
        }
        if(s[i]=='E'){
            if(x1<x2){
                x1++;
            }
        }
    if(x1==x2 && y1==y2){
        flag = true;
        cout << i+1 << endl;
        break;
    }
    }
    if(!flag){
        cout << -1 << endl;
    }
}

return 0;
}