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
ll a, b, c, i, temp, soma=1, global, k, n, j,cont=0;

cin >> n;
ll count_ones=0;
vector <ll> numeros(n);
for(i=0;i<n;i++){
    cin >> a;
    numeros[i] = a;
    if(a==1){
        count_ones++;
    }
}

ll maior_diferenca=0;

for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        cont= 0;

        for(k = 0; k < n; k++){
            if (k >= i && k <= j){
                cont += 1 - numeros[k]; 
            } 
            else {
                cont += numeros[k]; 
            }
        }
        maior_diferenca=max(maior_diferenca, cont);

    }
}
cout << maior_diferenca << endl;

return 0;
}