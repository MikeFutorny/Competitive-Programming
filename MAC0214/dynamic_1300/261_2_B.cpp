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
ll i, j, n, m, soma=0, cont=0, k, cont2=0;

cin >> n;
ll max=-1;
ll min=-1;


for(i=0;i<n;i++){
    cin >> k;
    if(k<min || min==-1){
        min = k;
        cont=1;
    }
    else if(k==min){
        cont++;
    }
    if(k>max){
        max = k;
        cont2=1;
    }
    else if(k==max){
        cont2++;
    }
}
ll final = max-min;
if(final==0){
    cout << 0 << " " << (n*(n-1))/2 << endl;
}
else{
    cout << final << " " << cont*cont2 << endl;
}

return 0;
}