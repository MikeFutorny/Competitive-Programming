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
ll i, j, n, a, b, temp, cont=0, globalcont=0;
string s;

cin >> n;

for(i=0;i<n;i++){
    cin >> temp; globalcont+=temp;
}
for(i=1;i<=5;i++){
    if((i+globalcont-1)%(n+1)!=0){
        cont++;
    }
}

cout << cont << endl;

return 0;
}