#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>

using ll = long long;

using namespace std;



int main(){
ll i, j, k, l, m, n, d;

cin >> n;
ll min=-1, max=-1, sum=0;

for(i=0;i<n;i++){
    cin >> m;
    if(min==-1){
        min = m;
        max = m; 
    }
    else{
        if(m<min){
            min = m;
            sum++;
        }
        else if(m>max){
            max = m;
            sum++;
        }
    }
}

cout << sum << endl;


return 0;
}