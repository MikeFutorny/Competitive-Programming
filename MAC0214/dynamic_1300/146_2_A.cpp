#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j, a;
string s;
map <ll, bool> mapa;
ll cont =0 ;
cin >> s;
for(i=0;i<s.length();i++){
    if(mapa.find(s[i])==mapa.end()){
        mapa[s[i]] = true;
        cont++;
    }
    else{
        if(mapa[s[i]]==true){
            mapa[s[i]] = false;
        }
    }
}
if(cont%2==0){
    cout << "CHAT WITH HER!" << endl;
}
else{
    cout << "IGNORE HIM!" << endl;
}

return 0;
}