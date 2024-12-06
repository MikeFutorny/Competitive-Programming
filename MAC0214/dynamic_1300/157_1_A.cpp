#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <set>
using ll = long long;

using namespace std;

int main(){
    ll i, j, k, m, n, a;
    
    string s;

    cin >> s;
    bool first=false;
    for(i=0;i<s.length();i++){
        if(s[i]=='0' && first==false){
            first = true;
        }
        else{
            if(s[i]=='0'){
                cout << '0';
            }
            else{
                if(i==s.length()-1 && first==false){
                    continue;
                }
                else{
                    cout << '1';
                }
            }
        }
    }
    cout << endl;


return 0;
}