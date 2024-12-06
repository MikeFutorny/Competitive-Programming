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
ll i, j, n, a, b, temp, cont, globalcont=0;
string s;

cin >> s;
ll index=0;
string hello = "hello";
bool flag=true;
for(i=0;i<s.length();i++){
    if(s[i]==hello[index]){
        if(index==4){
            flag = false;
            break;
        }
        else{
            index++;
        }
    }
}
if(flag){
    cout <<"NO" << endl;
}
else{
    cout << "YES" << endl;
}
return 0;
}