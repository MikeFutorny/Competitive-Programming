#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j;

string s;

cin >> s;

for(i=0;i<s.length();i++){
    if(s[i]=='.'){
        cout << 0;
    }
    else if(s[i]=='-'){
        if(s[i+1]=='.'){
            cout << 1;
        }
        else{
            cout << 2;
        }
        i++;
    }
}
cout << endl;
return 0;
}