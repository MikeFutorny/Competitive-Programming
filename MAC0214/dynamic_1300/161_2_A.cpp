#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using ll = long long;

using namespace std;


int main(){

ll i, j, k, n, temp;

for(i=0;i<5;i++){
    for(j=0;j<5;j++){
        cin >> temp;
        if(temp==1){
            cout << abs(i-2) + abs(j-2) << endl; 
        }
    }
}







return 0;
}