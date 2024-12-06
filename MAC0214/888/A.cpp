#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

using ll = long long;


int main(){

ll i, j, k, m, n, t, b, h, h_temp;

cin >> t;

for(b=0;b<t;b++){

    cin >> n >> m >> k >> h;
    ll cont = 0;
    for(i=0;i<n;i++){
        cin >> h_temp;
        if(h_temp!=h && abs(h_temp-h)%k==0){
            if(abs(h_temp-h)/k < m){
                cont++;
            }
        }
    }
    cout << cont << endl;

}


}