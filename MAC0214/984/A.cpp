#include <iostream>
#include <vector>
#include <map>

using namespace std;

using ll = long long;

int main(){

ll i, j, n, m, k, t, temp;

cin >> t;

for(k=0;k<t;k++){

cin >> n;
ll prev = -1;
bool flag = true;

for(j=0;j<n;j++){
    cin >> temp;
    if(prev==-1){
        prev=temp;
    }
    else{
        if(temp-prev==5 || temp-prev==7 || prev-temp==5 || prev-temp==7){
            prev = temp;
        }
        else{
            flag = false;
        }
    
    }    
}
if(!flag){
    cout << "NO" << endl;
}
else{
    cout << "YES" << endl;
}
}




return 0;
}