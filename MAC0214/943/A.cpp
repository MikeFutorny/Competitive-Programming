#include <iostream>
#include <vector>

using namespace std;
using ll=long long;


int main(){
ll t, i, x;

cin >> t;

for(i=0;i<t;i++){
    cin >> x;
    if(x%2==0){
        cout << x/2 << endl;
    }
    else{
        cout << x-1 << endl;
    }


}

return 0;
}