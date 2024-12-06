#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

using ll = long long;


int main(){

ll i, j, k, m, n, t, b, c;

cin >> t;

for(b=0;b<t;b++){

    cin >> n >> k;
    vector <ll> array(n);
    for(i=0;i<n;i++){
        cin >> array[i];
    }
    ll last = array[n-1];
    ll first = array[0];
    ll soma_last=0;
    ll soma_first=0;
    ll indice_last=-1;
    if(k==1){
        cout << "YES" << endl;
    }
    else{
        for(i=n-2;i>=0;i--){
            if(array[i]==last){
                soma_last++;
                if(soma_last==k-1){
                    indice_last = i;
                    break;
                }
            }
        }
        
        if(indice_last==-1){
            cout << "NO" << endl;
        }
        else if(first==last){
            cout << "YES" << endl;
        }
        else{
            for(i=1;i<n;i++){
                if(i>=indice_last){
                    cout << "NO" << endl;
                    break;
                }
                if(array[i]==first){
                    soma_first++;
                    if(soma_first==k-1){
                        cout << "YES" << endl;
                        break;
                    }
                }
            }
        }
    }


}



return 0;
}