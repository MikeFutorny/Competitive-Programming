#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
#include <algorithm>
using ll = long long;

using namespace std;



int main(){
ll i, j, n, m, soma=0, cont=0, k;
string s1, s2;
bool flag=false;

cin >> s1;
vector <char> saida;
ll estado=0;
bool aux=false;
for(i=0;i<s1.length();i++){
    if(s1[i]=='W' && s1[i+1]=='U' && s1[i+2]=='B'){
        if(estado==1){
            aux = true;
        }
        i+=2;
    }
    else{
        if(estado==0){
            estado=1;
        }
        else if(estado==1){
            if(aux){
                aux = false;
                saida.push_back(' ');
            }
        }
        saida.push_back(s1[i]);
    }
}

for(i=0;i<saida.size();i++){
    cout << saida[i];
}
cout << endl;
return 0;
}