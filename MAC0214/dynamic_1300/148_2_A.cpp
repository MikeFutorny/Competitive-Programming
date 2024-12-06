#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;

using namespace std;

int main() {
    ll n, y, k, m, i;

    cin >> y >> k >> n;
    bool flag=false;
    for(i=y+1;i<=n;i++){
        if(i%k==0){
            if(!flag){
                cout << i-y;
                flag = true;
            }
            else{
                cout << " " << i-y;
            }
        }
    }
    if(!flag){
        cout << -1;
    }
    cout << endl;

    return 0;
}

