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
string s1, s2;

cin >> s1 >> s2;
int cont=0;
bool flag=true;
for(i=0;i<s1.length();i++){
    if(tolower(s1[i])<tolower(s2[i])){
        flag = false;
        cout << -1 << endl; break;
    }
    if(tolower(s1[i])>tolower(s2[i])){
        flag = false;
        cout << 1 << endl; break;
    }
}
if(flag){
    cout << 0 <<endl;
}


}