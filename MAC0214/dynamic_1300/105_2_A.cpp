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

cin >> k >> l >> m >> n >> d;
ll sum=0;
for(i=1;i<=d;i++){
    if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
        sum++;
    }
}

cout << sum << endl;

return 0;
}