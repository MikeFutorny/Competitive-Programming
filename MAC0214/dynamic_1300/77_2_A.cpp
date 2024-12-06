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
bool flag=false;

cin >> s1;
if(s1.length()<7){
    cout << "NO" << endl;
}
else{
    char m = s1[0];
    for(i=1;i<s1.length();i++){
        if(s1[i]==m){
            cont++;
            if(cont>=6){
                flag=true;
                break;
            }
        }
        else{
            cont=0;
        }
        m=s1[i];
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}


return 0;
}