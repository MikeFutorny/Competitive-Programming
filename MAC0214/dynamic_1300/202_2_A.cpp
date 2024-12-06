#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <map>

using ll = long long;

using namespace std;

const ll MOD = 1000000007;



int main() {
    ll i, j, n, m, k, soma=0, x, y, a, b;
    bool flag=false;
    cin >> n;
    vector <ll> pos(3,0);

    for(i=0;i<n;i++){
        cin >> a;
        if(a==25){
            pos[0]++;
        }
        else if(a==50){
            if(pos[0]>0){
                pos[0]--;
                pos[1]++;
            }
            else{
                flag =true;
            }
        }
        else{
            if(pos[1]>0){
                pos[1]--;
                if(pos[0]>0){
                    pos[0]--;
                }
                else{
                    flag = true;
                }
            }
            else{
                if(pos[0]>2){
                    pos[0]-=3;
                }
                else{
                    flag = true;
                }
            }
        }
    }
    if(!flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}
