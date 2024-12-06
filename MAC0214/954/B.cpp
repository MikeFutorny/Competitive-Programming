#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

using ll=long long;


int main(){

ll t, i, j, n, m, l;

cin >> t;
for(j=0;j<t;j++){
    cin >> n >> m;
    vector <vector <ll> > matriz(n, vector<ll>(m));
    for(i=0;i<n;i++){
        for(l=0;l<m;l++){
            cin >> matriz[i][l];
        }
    }
    if(n==1 && m==1){
        cout << matriz[0][0];
    }
    else if(n==1){
        if(matriz[0][0]>matriz[0][1]){
            matriz[0][0] = matriz[0][1];
        }
        for(j=1;j<m-1;j++){
            if(matriz[0][j]> matriz[0][j-1] && matriz[0][j] > matriz[0][j+1]){
                if(matriz[0][j-1]>matriz[0][j+1]){
                    matriz[0][j] = matriz[0][j-1];
                }
                else{
                    matriz[0][j] = matriz[0][j+1];
                }
            }
        }
        if(matriz[0][m-1]>matriz[0][m-2]){
            matriz[0][m-1] = matriz[0][m-2];
        }
    }
    else if(m==1){
        if(matriz[0][0]>matriz[1][0]){
            matriz[0][0] = matriz[1][0];
        }
        for(j=1;j<n-1;j++){
            if(matriz[j][0]> matriz[j-1][0] && matriz[j][0] > matriz[j+1][0]){
                if(matriz[j-1][0]>matriz[j+1][0]){
                    matriz[j][0] = matriz[j-1][0];
                }
                else{
                    matriz[j][0] = matriz[j+1][0];
                }
            }
        }
        if(matriz[n-1][0]>matriz[n-2][0]){
            matriz[n-1][0] = matriz[n-1][0];
        }
    }
    else{
        if(matriz[0][0]>matriz[0][1]){
            matriz[0][0] = matriz[0][1];
        }
        for(j=1;j<m-1;j++){
            if(matriz[0][j]> matriz[0][j-1] && matriz[0][j] > matriz[0][j+1]){
                if(matriz[0][j-1]>matriz[0][j+1]){
                    matriz[0][j] = matriz[0][j-1];
                }
                else{
                    matriz[0][j] = matriz[0][j+1];
                }
            }
        }
        if(matriz[0][m-1]>matriz[0][m-2]){
            matriz[0][m-1] = matriz[0][m-2];
        }
    }
    for(j=0;j<m;j++){
        if(matriz[0][j])
    }
    for(i=1;i<n-1;i++){
        for(l=1;l<m-1;l++){

        }
    }





}

return 0;
}