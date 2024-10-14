#include <iostream>
#include <vector>
#include <string>
using namespace std;
using ll=long long;





int main(){
ll t, i, j, l, n;

cin >> t;
for(j=0;j<t;j++){
cin >> n;
vector <ll> array(n);
vector <ll> array2(n+1);
for(i=1;i<n;i++){
    cin >> array[i];
}
if(n==2){
    cout << array[1]+1 << " " << array[1] << endl;
}
else{
    if(array[1] < array[2]){
        array2[0] = array[0]+1;
        array2[1] = array[0];
    }
    else{
        arra2
    }
    for(i=0;i<n;i++){
        if(array[i+1])<array;
    }

    }
}

return 0;
}