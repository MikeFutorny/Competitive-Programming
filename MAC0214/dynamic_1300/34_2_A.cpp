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
ll a, b, c, i, temp, soma=0, global, x, y, z, n, index1, index2;
bool flag = true;

cin >> n;

ll current=-1, previous;


vector <ll> array(n+1);

cin >> array[0];
previous = array[0];

for(i=1;i<n;i++){
    cin >> array[i];
    if(abs(array[i]-array[i-1])<current || current ==-1){
        current = abs(array[i]-array[i-1]);
        index1 = i;
        index2 = i+1;
    }
}
if(abs(array[n-1]-array[0])<current || current==-1){
    index1= n;
    index2 = 1;
}

cout << index1 << " " << index2 << endl;
return 0;
}