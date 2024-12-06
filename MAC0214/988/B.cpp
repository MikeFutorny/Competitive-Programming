#include <iostream>
#include <vector>
#include <map>

using ll = long long;
using namespace std;

int main(){
ll i, j,n ,m,k,t, a;

cin >> t;
for(i=0;i<t;i++){
    cin >> n;
    ll sum=n-2, min, max;
    map <ll, ll> mapa;

    for(j=0;j<n;j++){
        cin >> a;
        if(sum%a==0){
            if(mapa.find(sum/a)!=mapa.end()){
                min = a;
                max = sum/a;
            }
            else{
                mapa[a]=1;
            }
        }
    }
    cout << min << " " << max << endl;

}



return 0;
}