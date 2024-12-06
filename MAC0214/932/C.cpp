#include <iostream>
#include <vector>
#include <map>

using ll = long long;

using namespace std;

int main(){

ll t, i, j, k, n, temp, m;

cin >> t;

for(i=0;i<t;i++){
    cin >> n >> m >> k;
    vector <bool> usado1(k+1, false);
    vector <bool> usado2(k+1, false);
    vector <bool> total(k+1, false);

    ll soma1=0;
    ll soma2=0;;
    ll soma_total=0;

    for(j=0;j<n;j++){
        cin >> temp;
        if(temp<=k){
            if(usado1[temp]==false){
                usado1[temp] = true;
                total[temp] = true;
                soma1++;
                soma_total++;
            }
        }
    }

    for(j=0;j<m;j++){
        cin >> temp;
        if(temp<=k){
            if(usado2[temp]==false){
                usado2[temp] = true;
                soma2++;
                if(total[temp]==false){
                    total[temp] = true;
                    soma_total++;
                }
            }
        }
    }

    if(soma_total==k){
        if(soma1>=k/2 && soma2>=k/2){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    else{
        cout << "NO" << endl;
    }


}

return 0;
}
