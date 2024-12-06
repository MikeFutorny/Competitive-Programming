#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;

void recursao(ll gingado1, ll gingado2, ll resto_atual, bool &flag){
    if((resto_atual+2)%9==0 && gingado1>0){
        flag = true;
    }
    if((resto_atual+6)%9==0 && gingado2>0){
        flag = true;
    }
    else{
        if(gingado1>0){
            resto_atual = (resto_atual+2)%9;
            recursao(gingado1-1, gingado2, resto_atual, flag);
        }
        if(gingado2>0){
            resto_atual = (resto_atual+6)%9;
            recursao(gingado1, gingado2-1, resto_atual, flag);
        }
    }
}


int main() {
    ll n, m, i, t, j, a;
    string s;
    cin >> t;

    for(j=0;j<t;j++){
        cin >> n;
        ll soma=0;
        ll gingado1=0;
        ll gingado2=0;
        while(n>0){
            a = n%10;
            n = n/10;
            soma+=a;
            if(a==2){
                gingado1++;
            }
            if(a==3){
                gingado2++;
            }
        }
        if(soma%9==0){
            cout << "YES" << endl;
        }
        else{
            ll resto = soma%9;
            bool flag=false;
            recursao(gingado1, gingado2, resto, flag);
            if(!flag){
                cout << "NO" << endl;
            }
            else{
                cout << "YES" << endl;
            }
        }


    }
    return 0;
}