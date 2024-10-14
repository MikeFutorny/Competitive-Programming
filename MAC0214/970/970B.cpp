#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <cmath> 
using namespace std;
using ll = long long;

int main(){

ll t, i, j, n, k, a, b;
string s;
cin >> t;

for(i=0;i<t;i++){
    ll count_0 = 0;
    ll count_1 = 0;
    cin >> n;
    cin >> s;
    if(sqrt(n)*sqrt(n)!=n){
        cout << "No" << endl;
    }
    else{
        for(j=0;j<n;j++){
            if(s[j]=='0'){
                count_0++;
            }
            else{
                count_1++;
            }
        }
        if((count_0+2)*(count_0+2)==count_1+count_0*count_0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}


return 0;
}