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
string s;
char c;

cin >> n >> m;
vector <vector <ll> > matriz(n , vector <ll> (m, 0));

for(j=0;j<n;j++){
    for(i=0;i<m;i++){
        cin >> c;
        if(c=='.'){
            matriz[j][i] = 1; 
        }
        else{
            matriz[j][i] = -1;
        }
    }
}

vector <vector <bool> > visited(n , vector <bool> (m, false));

bool triger;
for(i=0;i<n;i++){
    if(i%2==0){
        triger=false;
    }
    else{
        triger=true;
    }
    for(j=0;j<m;j++){
        if(matriz[i][j]==-1){
            cout << '-';
        }
        else{
            if(triger){
                cout << 'B';
                triger=false;
            }
            else{
                cout << 'W';
                triger=true;
            }
        }
    }
    cout << endl;
}

return 0;
}