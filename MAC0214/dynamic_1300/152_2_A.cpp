#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>

using ll = long long;

using namespace std;



int main(){
ll i, j, k, l, m, n, d;

cin >> n;

ll left=0, right=0;
ll left2=0, right2=0;
for(i=0;i<n;i++){
    cin >> m >> d;
    if(m==0){
        left2++;
    }
    else{
        left++;
    }
    if(d==0){
        right2++;
    }
    else{
        right++;
    }
}
ll sum=0;

if(left2>left){
    sum+=left;
}
else{
    sum+=left2;
}
if(right2>right){
    sum+=right;
}
else{
    sum+=right2;
}
cout << sum << endl;
return 0;
}