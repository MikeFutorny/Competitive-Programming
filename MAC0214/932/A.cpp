#include <iostream>
#include <vector>
#include <map>

using ll = long long;

using namespace std;

int main(){

ll t, i, j, k, n;
cin >> t;
string s;

for(i=0;i<t;i++){
    cin >> n;
    cin >> s;
    ll ini=-1, last=-1;
    for(j=0;j<n;j++){
        if(s[j]=='B'){
            if(ini==-1){
                ini = j;
                last = j;
            }
            else{
                last = j;
            }
        }
    }
    cout << last - ini + 1 << endl;

}

return 0;
}

