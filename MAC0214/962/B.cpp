#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

using ll = long long;


int main(){

ll i, j, t, k, n, m;

cin >> t;

for(i=0;i<t;i++){
    cin >> n >> k;
    vector <char> array(n*n+1);
    vector <char> output((n/k)*(n/k));
    for(j=0;j<n;j++){
        for(m=0;m<n;m++){
            cin >> array[j*n+m];
        }
    }

    for(j=0;j<n;j+=k){
        for(m=0;m<n;m+=k){
            cout << array[j*n+m];
        }
        cout << endl;
    }




}



return 0;
}
