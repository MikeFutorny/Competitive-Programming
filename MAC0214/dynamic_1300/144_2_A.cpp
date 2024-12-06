#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using ll = long long;

using namespace std;



int main(){
ll i, j, n;

cin >> n;
if(n%2==1){
    cout << "-1" << endl;
}
else{
    for(i=1;i<n;i+=2){
        cout << i+1 << " " << i << " ";
    }
}
}