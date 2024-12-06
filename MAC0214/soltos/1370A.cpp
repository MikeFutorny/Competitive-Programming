#include <iostream>
#include <vector>
using namespace std;

using ll = long long;



int main(){

ll t, i, n, a;

cin >> t;

for(i=0;i<t;i++){
    cin >>n;
    if(n%2==0){
        cout << n/2 << endl;
    }
    else{
        cout << (n-1)/2 << endl;
    }
}






return 0;


}