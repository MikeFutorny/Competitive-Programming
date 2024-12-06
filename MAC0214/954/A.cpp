#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

using ll=long long;


int main(){

ll t, i, j, a, b, c;

cin >> t;
for(j=0;j<t;j++){
    cin >> a;
    cin >> b;
    cin >> c;
    if(a>b){
        if(c>a){
            cout << c-b << endl;
        }
        else{
            if(c>b){
                cout << a-b << endl;
            }
            else{
                cout << a-c << endl;
            }
        }
    }
    else{
        if(c>b){
            cout << c-a << endl;
        }
        else{
            if(c>a){
                cout << b-a << endl;
            }
            else{
                cout << b-c << endl;
            }
        }
    }
}


return 0;
}