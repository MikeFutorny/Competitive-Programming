#include <iostream>
#include <vector>
#include <map>
#include <cmath>
using namespace std;

using ll = long long;

int main(){
ll t, i, j, k, l, a, b, c;

cin >> t;
for(i=0;i<t;i++){
    cin >> a >> b >> c;
    if(b%3!=0 && b%3+c < 3){
        cout << -1 << endl;
    }
    else{
        if((b+c)%3==0){
            cout << a + (b+c)/3 << endl;
        }
        else{
            cout << a + (b+c)/3 + 1 << endl;
        }
    }

}


return 0;
}
