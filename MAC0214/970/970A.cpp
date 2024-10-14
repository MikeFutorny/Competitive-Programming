#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
using ll = long long;

int main(){

ll t, i, j, n, k, a, b;

cin >> t;

for(j=0;j<t;j++){
    cin >> a;
    cin >> b;
    if((a+2*b)%2==0 && (b%2==0 || a>1)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }




}






return 0;
}