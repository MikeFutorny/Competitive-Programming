#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>

using ll = long long;

using namespace std;


int main(){

ll t, i, j, k, n, m, a, minTam, maxTam;

cin >> k >> n;

ll somaMax = 0;
ll somaMin = 0;
vector <ll> cortes(k+1);
vector <ll> tamanhosmaximos(k+1);
vector <ll> tamanhosminimos(k+1);
cortes[0] = 0;

for(i=1;i<=k;i++){
    cin >> minTam;
    cin >> maxTam;
    somaMin += minTam;
    somaMax += maxTam;
    tamanhosmaximos[i] = maxTam;
    tamanhosminimos[i] = minTam;
}


if(somaMin>n || somaMax <n){
    cout << "NO" << endl;
}

else{
    ll diferenca = somaMax - n;

    for(i=1;i<=k;i++){
        if(tamanhosmaximos[i]-tamanhosminimos[i]>=diferenca){
            cortes[i] = tamanhosmaximos[i]-diferenca;
            diferenca=0;
        }
        else{
            cortes[i] = tamanhosminimos[i];
            diferenca -= tamanhosmaximos[i]-tamanhosminimos[i];
        }
    }


    cout << "YES" << endl;
    for(i=1;i<=k;i++){
        cout << cortes[i] << " ";
    }
}

return 0;
}