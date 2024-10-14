#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll=long long;





int main(){
ll t, i, j, l, k, lena, lenb;
string a, b;

cin >> t;
for(j=0;j<t;j++){
    k=0;
    cin >> lena >> lenb;
    cin >> a >> b;
    ll ultimo=0;
    for(i=0;i<lena;i++){
        bool flag = false;
        for(l=ultimo;l<lenb;l++){
            if(a[i]==b[l]){
                flag = true;
                k++;
                ultimo = l+1;
                break;
            }
        }
        if(flag==false){
            break;
        }
    }
cout << k << endl;
}
return 0;
}