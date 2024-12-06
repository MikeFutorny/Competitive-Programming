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
ll i, j, n, a, b, temp;
string s1, s2;
cin >> s1 >> s2;

if(s1.length()!=s2.length()){
    cout << "NO" << endl;
}


else{
    char x=0, y=0;
    ll taken=0;
    for(i=0;i<s1.length();i++){
        if(s1[i]!=s2[i]){
            if(taken==0){
                x = s1[i];
                y = s2[i];
                taken=1;
            }
            else if(taken==1){
                if(x==s2[i] && y==s1[i]){
                    taken=2;
                }
                else{
                    taken=-1;
                }
            }
            else{
                taken=-1;
            }
        }
    }
    if(taken==-1 || taken==1){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}


return 0;
}