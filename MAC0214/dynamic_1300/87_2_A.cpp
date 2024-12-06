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
ll i, j, n, a, b;

cin >> n;
ll current=0;
ll max = -1;
for(i=0;i<n-1;i++){
    cin >> a >> b;
    current = current-a+b;
    if(max ==-1){
        max = current;
    }
    else{
        if(current>max){
            max = current;
        }
    }
}
cout << max << endl;
return 0;
}