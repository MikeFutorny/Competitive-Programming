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

cin >> n;

for(i=0;i<n;i++){
    cin >> s;
    if(s=="--X"||s=="X--"){
        globalcont--;
    }
    else{
        globalcont++;
    }
}
cout << globalcont << endl;
return 0;
}