#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>

using ll = long long;

using namespace std;



int main(){
ll i, j, k, l, m, n, d;

string s;
cin >> s;
vector <ll> array(s.length(), 100000);

for(i=0;i<s.length();i+=2){
    array[i]=ll(s[i])-48;
}
sort(array.begin(), array.end());

for(i=0;i<s.length()/2;i+=1){
    cout << array[i] << "+";
}
cout << array[s.length()/2] << endl;
return 0;
}