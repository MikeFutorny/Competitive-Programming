#include <vector>
#include <iostream>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll t, i, j, k, n, m, a;

cin >> t;

for(j=0;j<t;j++){


    cin >> n >> m;

    vector <ll> sentados;
    ll ultimo = -1;
    ll inicial;

    bool flag = true;
    for(i=0;i<n;i++){
        cin >> a;
        sentados.push_back(a);
    }
    if(n>m){
        cout << "NO" << endl;
    }
    else{

    sort(sentados.begin(), sentados.end());

    for(i=n-1;i>=0;i--){

        if(ultimo==-1){
            ultimo = sentados[i]+1;
            inicial = sentados[i]+1;
        }
        else{
            if(ultimo<=m-inicial){
                ultimo = ultimo + sentados[i]+1;
            }
            else{
                flag = false;
                break;
            }
        }
   
    }


    if(flag==true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    }
}

return 0;
}