#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using ll = long long;

using namespace std;



int main(){
string s1, s2;

ll i, j;

cin >> s1;
cin >> s2;
vector <char> out;
for(i=0;i<s1.length();i++){
    if(s1[i]==s2[i]){
        out.push_back('0');
    }
    else{
        out.push_back('1');
    }
}

for(i=0;i<s1.length();i++){
    cout << out[i];
}
cout << endl;
return 0;

}