#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

using ll = long long;

int main(){

ll i, j, n, m, k, t, temp, index, q, v;

cin >> t;

for(index=0;index<t;index++){

string s;
cin >> s;
cin >> q;
bool prev =false;
ll cont =0;
for(i=0;i<q;i++){
    cin >> m >> v;
    if(v==s[m-1]){
        if(prev){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        s[m-1] = v;
        if(v=='1'){
            if(m==s.length()-2 && m>1){
                if(s[m-2]=='1' && s[m]=='0' && s[m+1]=='0'){

                }
            }
            else{
                if(m==s.length())
            }
        }
        else{
            if(m==s.length()-1){
                if(s[m-1]=='0' && ){

                }
            }
        }
    }
}




}


return 0;
}