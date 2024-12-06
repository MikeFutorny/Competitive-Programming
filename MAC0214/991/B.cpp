#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;


int main() {
    ll n, m, i, t, j, a;
    string s;
    cin >> t;

    for(j=0;j<t;j++){
        ll golden=-1;
        cin >> n;
        vector <ll> comprido(n);

        for(i=0;i<n;i++){
            cin >>a;
            comprido[i] = a;
        }
        bool flag =true;
        ll sum1=0;
        ll sum2=0;

        for(i=0;i<n;i++){
            if((i+1)%2==1){
                sum1+=comprido[i];
            }
            else{
                sum2+=comprido[i];
            }
        }
        if(n%2==0){
            if(sum1%(n/2)!=0){
                flag = false;
            }
            else{
                sum1 = sum1/(n/2);
            }
            if(sum2%(n/2)!=0){
                flag = false;
            }
            else{
                sum2 = sum2/(n/2);
            }
        }
        else{
            if(sum2%(n/2)!=0){
                flag = false;
            }
            else{
                sum2 = sum2/(n/2);
            }
            if(sum1%(n/2+1)!=0){
                flag = false;
            }
            else{
                sum1 = sum1/(n/2 + 1);
            }
        }


        if(sum1!=sum2){
            flag =false;
        }

        if(flag){
            cout << "YES" <<endl;
        }
        else{
            cout << "NO" << endl;
        }


    }
    return 0;
}