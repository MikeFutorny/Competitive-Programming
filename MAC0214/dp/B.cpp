#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

using ll = long long;


int main() {
ll n, x, i;

cin >> n;
vector <ll> h(n+1);
for(i=1;i<=n;i++){
    cin >> h[i];
}

vector <ll> dp(n+3, -1);
dp[1] = 0;
for(i=1;i<=n;i++){
    if(dp[i+1]==-1 || dp[i+1]>dp[i]+abs(h[i+1]-h[i])){
        dp[i+1] = dp[i]+abs(h[i+1]-h[i]);
    }
    if(dp[i+2]==-1 || dp[i+2]>dp[i]+abs(h[i+2]-h[i])){
        dp[i+2] = dp[i]+abs(h[i+2]-h[i]);
    }
}
if(dp[n]==-1){
    dp[n] = 0;
}
cout << dp[n]<<endl;


return 0;
}