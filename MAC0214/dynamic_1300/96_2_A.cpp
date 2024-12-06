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
ll i, j, n, a, b;
string s;

cin >> s;
bool flag=false;
for(i=0;i<s.length();i++){
    if(s[i]=='Q'|| s[i]=='H'|| s[i] == '9'){
        cout << "YES" << endl;
        flag = true;
        break;
    }
}
if(!flag){
    cout << "NO" << endl;
}



}