#include <iostream>
#include <vector>
using namespace std;

using ll = long long;



int main(){

ll t, i, j, a1, a2, b1, b2;    
cin >> t;
for(i=0;i<t;i++){

cin >> a1 >> a2 >> b1 >> b2;
if(a1>b1 && a2>b2){
    if(a2>b1 && a1>b2){
        cout << 4 << endl;
    }
    else{
        cout << 2 << endl;
    }
}
else if(a2>b1 && a1>b2){
    cout << 2 << endl;
}
else{
    cout << 0 << endl;
}

}

return 0;
}