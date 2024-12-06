#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
using ll = long long;

using namespace std;



int main(){
ll i, j, n, m, soma=0, cont=0;

cin >> n >> m;
ll pos=1;
for(i=0;i<m;i++){
    cin >> j;
    if(j>=pos){
        soma += j-pos;
    }
    else{
        soma += n-pos+j;
    }
    pos = j;
}

cout << soma << endl;
return 0;
}