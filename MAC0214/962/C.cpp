#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

using ll = long long;


int main(){

ll i, j, t, k, n, m, q, l, r;

cin >> t;


for(i=0;i<t;i++){
    cin >> n >> q;
    string a, b;
    cin >> a >> b;
    vector <ll> diferentes(n+1, 0);
    map<char, ll> quantos;
    for(j=0;j<n;j++){
        if(j==0){
            diferentes[j]=0;
        }
        else{
            diferentes[j] = diferentes[j-1];
        }

        if(a[j]!=b[j]){
            if(quantos.find(a[j])==quantos.end()){
                quantos[a[j]]=1;
                diferentes[j]++;

            }
            else{
                if(quantos[a[j]]<0){
                    diferentes[j]--;
                }
                else{
                    diferentes[j]++;
                }
                quantos[a[j]]++;
            }
            if(quantos.find(b[j])==quantos.end()){
                quantos[b[j]]= -1;
                diferentes[j]++;
            }
            else{
                if(quantos[b[j]]>0){
                    diferentes[j]--;
                }
                else{
                    diferentes[j]++;
                }
                quantos[b[j]]--;
            }
        }
    }
    for(j=0;j<q;j++){
        cin >> l >> r;
        if(l==1){
            cout << abs(diferentes[r-1])/2 << endl;
        }
        else{
            cout << abs(diferentes[r-1] - diferentes[l-2])/2 << endl;
        }
    }
}

return 0;
}
