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
ll i, j, n, a, b, temp, cont, globalcont=0;
string s;

cin >> a >> s;
vector <ll> alphabet(26, 0);

for(i=0;i<s.length();i++){
    alphabet[s[i]-'a']++;
}

ll min=-1;
vector <char> aux;

for(i=0;i<26;i++){
    if(alphabet[i]!=0 && (alphabet[i]<min || min==-1)){
        min = alphabet[i];
    }
}
if(min<a){
    cout << -1 << endl;
}
else{
    bool flag=true;
    for(i=0;i<26;i++){
        if(alphabet[i]!=0){
            if(alphabet[i]%a!=0){
                flag = false;
                break;
            }
            else{
                for(j=0;j<alphabet[i]/a;j++){
                    aux.push_back(i+'a');
                }
            }
        }
    }

    if(!flag){
        cout << -1 << endl;
    }

    else{
        for(j=0;j<a;j++){
            for(i=0;i<aux.size();i++){
                cout << aux[i];
            }
        }
        cout << endl;
    }
}
return 0;
}