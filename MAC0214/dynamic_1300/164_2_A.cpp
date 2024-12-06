#include <iostream>
#include <vector>
#include <map>
#include <string>

using ll = long long;

using namespace std;


int main(){

ll n, i, j;
string s;
cin >> n;
cin >> s;
ll cont=0;

for(i=1;i<n;i++){
    if(s[i]==s[i-1]){
        cont++;
    }   
}
cout << cont << endl;
}