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

cin >> n;
for(i=0;i<n;i++){
    cont = 0;
    for(j=0;j<3;j++){
        cin >> temp;
        cont+=temp;
    }
    if(cont>1){
        globalcont++;
    }
}
cout << globalcont << endl;
return 0;
}