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
ll i, j, n, a, b, temp, cont, globalcont=0;
string s;

cin >> n;

vector <vector <ll > > matriz (2*n+1, vector <ll> (2*n+1, -1));


for(i=0;i<=2*n;i++){
    for(j=0;j<=2*n;j++){
        
        if(j<=n && i<=n && i+j>=n){
            matriz[i][j] = i+j-n;
        }
        else if(j<=n && i>n && j+n>=i){
            matriz[i][j] = j+n-i;
        }
        else if(j>n && i<=n && n+i>=j){
            matriz[i][j] = n+i-j;
        }
        else if(j>n && i>n && 3*n>=i+j){
            matriz[i][j] = 3*n-i-j;
        }
    }
}

for(i=0;i<=2*n;i++){
    for(j=0;j<=2*n;j++){
        if(matriz[i][j]!=-1){
            cout << matriz[i][j];
            if(j!=2*n){
                if(matriz[i][j+1]==-1){
                    break;
                }
                cout <<  " ";
            }
        }
        else{
            cout << "  ";
        }

    }
    cout << endl;
}

return 0;
}