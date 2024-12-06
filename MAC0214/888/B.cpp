#include <iostream>
#include <vector>
#include <map>
#include <cmath>
#include <algorithm>

using namespace std;

using ll = long long;


int main(){

ll i, j, k, m, n, t, b, h, h_temp, a;

cin >> t;

for(b=0;b<t;b++){

    cin >> n;
    vector <ll> array(n);
    vector <ll> array2(n);

    for(j=0;j<n;j++){
        cin >> a;
        array[j] = a;
        array2[j] = a;
    }
    sort(array.begin(), array.end());
    bool flag = true;
    for(j=0;j<n;j++){
        if(array[j]%2 != array2[j]%2){
            cout << "NO" << endl;
            flag = false;
            break;
        }
    }
    if(flag==true){
        cout << "YES" << endl;
    }

}

}