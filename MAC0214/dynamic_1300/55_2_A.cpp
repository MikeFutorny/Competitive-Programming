#include <iostream>
#include <vector>
#include <map>
#include <string>

using ll = long long;

using namespace std;


int main(){

ll i, j, a, b, c, d, n;
string s;
cin >> s;
ll count_min=0, count_max=0;

for(i=0;i<s.length();i++){
    if(s[i]>90){
        count_min++;
    }
    else{
        count_max++;
    }
}
if(count_min>=count_max){
    for(i=0;i<s.length();i++){
        s[i] = tolower(s[i]);
    }
}
else{
    for(i=0;i<s.length();i++){
        s[i] = toupper(s[i]);
    }
}
cout << s << endl;
return 0;
}