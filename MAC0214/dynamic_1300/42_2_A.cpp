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
ll a, b, c, i, temp, soma=0, global, k, n;
bool flag = true;
string s;
map <string, ll> mapa;
cin >> n;

ll max = -1;
string correta;
for(i=0;i<n;i++){
cin >> s;
if(mapa.find(s) == mapa.end()){
    mapa[s] = 1;
    if(mapa[s]>max){
        max = mapa[s];
        correta = s;
    }
}
else{
    mapa[s]++;
    if(mapa[s]>max){
        max = mapa[s];
        correta = s;
    }
}


}

cout << correta << endl;
return 0;
}