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
ll i, j, n, m, soma=0, cont=0, k, a, b;

bool flag=false;

cin >> n >> m;
vector <ll> array(m);

for(i=0;i<m;i++){
    cin >> array[i];
}

sort(array.begin(), array.end());
ll min = -1;

for(i=0;i<=m-n;i++){
    j = i+n-1;
    if(array[j]-array[i]<min || min==-1){
        min = array[j]-array[i];
    }
}


cout << min << endl;

return 0;
}