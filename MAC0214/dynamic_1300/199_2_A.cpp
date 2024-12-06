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
ll i, j, n, m, soma=0, k, a, cont1=0, cont2=0, cont3=0;

cin >> n;
vector <ll> numeros(8,0);
for(i=0;i<n;i++){
    cin >> a;
    numeros[a]++;
}

numeros[1]-=numeros[4];
numeros[2]-=numeros[4];
cont1+=numeros[4];
numeros[4]=0;
numeros[1]-=numeros[3];
numeros[6]-=numeros[3];
cont2+=numeros[3];
numeros[3]=0;
numeros[1]-=numeros[6];
numeros[2]-=numeros[6];
cont3+=numeros[6];
numeros[6]=0;
bool flag=false;
for(i=1;i<8;i++){
    if(numeros[i]!=0){
        flag=true;
        break;
    }
}
if(flag){
    cout << -1 << endl;
}
else{
    for(i=0;i<cont1;i++){
        cout << 1 << " " << 2 << " " << 4 << endl;
    }
    for(i=0;i<cont2;i++){
        cout << 1 << " " << 3 << " " << 6 << endl;
    }
    for(i=0;i<cont3;i++){
        cout << 1 << " " << 2 << " " << 6 << endl;
    }
}


return 0;
}


/*1 2 4
1 2 6 
1 3 6*/


