#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j, a;

cin >> n >> a;

string s;
cin >> s;
for(i=0;i<a;i++){
    for(j=1;j<s.length();j++){
        if(s[j]=='G'){
            if(s[j-1]=='B'){
                s[j] = 'B';
                s[j-1] = 'G';
                j++;
            }
        }
    }
}

for(i=0;i<s.length();i++){
    cout << s[i];
}
cout << endl;

return 0;
}