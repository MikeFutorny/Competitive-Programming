#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <set>
#include <algorithm>
using ll = long long;

using namespace std;



int main(){
ll i, j, n, m, soma=0, cont=0, k, cont2=0;

cin >> n;
vector <ll> array(n);
map <ll, vector <ll> > mapa;
for(i=0;i<n;i++){
    cin >> array[i];
    mapa[array[i]].push_back(i+1);
}
ll valid=0;
vector < pair <ll, ll> > saida;
for(i=0;i<n;i++){
    if(mapa.find(array[i])!=mapa.end()){
        vector <ll> aux(mapa[array[i]].size());
        for(j=0;j<mapa[array[i]].size();j++){
            aux[j] = mapa[array[i]][j]; 
        }
        sort(aux.begin(), aux.end());
        ll dif;
        if(aux.size()==1){
            valid++;
            pair <ll, ll> par;
            par.first = array[i];
            par.second = 0;
            saida.push_back(par);
        }
        else{
            dif = aux[1]-aux[0];
            bool flag=false;
            for(j=2;j<aux.size();j++){
                if(aux[j]-aux[j-1]!=dif){
                    flag =true;
                    break;
                }
            }
            if(!flag){
                valid++;
                pair <ll, ll> par;
                par.first = array[i];
                par.second = dif;
                saida.push_back(par);
            }
        }
        mapa.erase(array[i]);
    }
}
sort(saida.begin(), saida.end());
cout << valid << endl;
for(i=0;i<saida.size();i++){
    cout << saida[i].first << " " << saida[i].second << endl;
}
return 0;
}
