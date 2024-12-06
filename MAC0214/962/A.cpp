#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

using ll = long long;


int main(){

ll i, j, t, k, n;

cin >> t;

for(i=0;i<t;i++){
    cin >> n;
    if(n%4==0){
        cout << n/4 << endl;
    }
    else{
        cout << n/4+1 << endl;
    }
}



return 0;
}
