#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j, a,b,c, sum1=0, sum2=0, sum3=0;

cin >> n;

for(i=0;i<n;i++){
    cin >> a >> b >> c;
    sum1+=a;
    sum2+=b;
    sum3+=c;
}
if(sum1!=0||sum2!=0||sum3!=0){
    cout << "NO" << endl;
}
else{
    cout << "YES" <<endl;
}



return 0;
}