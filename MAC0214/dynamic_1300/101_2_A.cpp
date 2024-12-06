#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j, a;

string s1, s2, s3;

cin >> s1 >> s2 >> s3;
vector <char> letras(26,0);

bool flag = true;

for(i=0;i<s1.length();i++){
    letras[s1[i]-65]++;
}

for(i=0;i<s2.length();i++){
    letras[s2[i]-65]++;
}

for(i=0;i<s3.length();i++){
    letras[s3[i]-65]--;
}

for(i=0;i<26;i++){
    if(letras[i]!=0){
        cout << "NO" << endl;
        break;
    }
    else{
        if(i==25){
            cout << "YES" << endl;
        }
    }
}

return 0;
}