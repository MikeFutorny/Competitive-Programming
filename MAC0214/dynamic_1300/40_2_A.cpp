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
string s1, s2;
cin >> s1 >>s2;
bool flag=false;
if(s1.length()!=s2.length()){
    cout << "NO" << endl;
}
else{
    j= s1.length()-1;
    for(i=0;i<s1.length();i++){
        if(s1[i]!=s2[j]){
            flag=true;
            break;
        }
        j--;
    }
    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}
return 0;
}