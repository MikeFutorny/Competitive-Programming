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
ll i, j, n, a, b, temp, cont=0, globalcont=0, m, max=-1, min_index=-1;
string s;
char letra;
cin >> n >> m;

vector <ll> alphabet(26, 0);

for(i=0;i<n;i++){
    cin >> letra;
    alphabet[letra-'A']++;
}

sort(alphabet.begin(), alphabet.end(), greater <ll> ());

for(i=0;i<26;i++){
    if(alphabet[i]>m){
        cont +=m*m;
        break;
    }
    else{
        cont+=alphabet[i]*alphabet[i];
        m-=alphabet[i]; 
        if(n==0){
            break;
        }
    }
}

cout << cont << endl;
return 0;
}