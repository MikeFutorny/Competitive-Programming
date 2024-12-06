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
vector <ll> alphabet(26,0);
cin >> s;
for(i=0;i<s.length();i++){
    alphabet[s[i]-'a']++;
}
ll even_count=0, odd_count=0;
for(i=0;i<26;i++){
    if(alphabet[i]>0 && alphabet[i]%2==0){
        even_count++;
    }
    if(alphabet[i]>0 && alphabet[i]%2==1){
        odd_count++;
    }
}

if(odd_count<=1){
    cout << "First" << endl;
}
else{
    if(odd_count%2==0){
        cout << "Second" << endl;
    }
    else{
        cout << "First"  <<endl;
    }
}


return 0;
}