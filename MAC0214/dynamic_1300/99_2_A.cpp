#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using ll = long long;

using namespace std;



int main(){
ll i, j, n, a, b=0;

cin >> n;
vector <ll> precos(7);
bool flag = false;
for(i=0;i<7;i++){
    cin >> precos[i];
    b+= precos[i];
    if(n<=b){
        flag = true;
        cout << i+1 << endl;
        break;
    }
}
if(!flag){
    j = n%b;
    b=0;
    if(j==0){
        for(i=6;i>=0;i--){
            if(precos[i]!=0){
                cout << i+1 << endl;
                break;
            }
        }
    }
    else{
        for(i=0;i<7;i++){
            b+=precos[i];
            if(j<=b){
                cout << i+1 << endl;
                break;
            }
        }
    }
}



}