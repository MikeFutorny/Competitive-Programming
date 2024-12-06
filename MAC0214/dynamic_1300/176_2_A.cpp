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
ll a, b, c, i, temp, soma=0, global, k, n, j;

vector <string> matriz(4);
for(i=0;i<4;i++){
    cin >> matriz[i];
}

bool flag = false;
for(b=0;b<3;b++){
    for(c=0;c<3;c++){
        if(
            matriz[b][c] == matriz[b][c+1] &&
            matriz[b][c] == matriz[b+1][c] &&
            matriz[b][c] == matriz[b+1][c+1]){           
            flag = true;
            break;
        }
        else{
            int x1 = matriz[b][c];
            int x2 = matriz[b][c+1];
            int x3 = matriz[b+1][c];
            int x4 = matriz[b+1][c+1];

            if ((x1 == x2 && x1 == x3) || 
                (x1 == x2 && x1 == x4) || 
                (x1 == x3 && x1 == x4) || 
                (x2 == x3 && x2 == x4)) {
                    flag=true;
                    break;
            }
        }
    }
}

if(!flag){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
return 0;
}