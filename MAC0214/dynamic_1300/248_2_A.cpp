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
ll i, j, n, a, b, temp, cont, globalcont=0, m;
cin >> n;

ll par=0, impar=0;
bool flag=true;
for(i=0;i<n;i++){
    cin >> a;
    if(a==200){
        par++;
    }
    else if(a==100){
        impar++;
    }
    else{
        cout << "NO" << endl;
        flag = false;
    }

}
if(flag){
    if((par*200 + impar*100) %2!=0){
        cout << "NO" << endl;
    }
    else{
        if(impar%2==0){
            if(impar==0 && par%2!=0){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }
        else{
            cout << "NO" << endl;
        }
    }
}
return 0;
}