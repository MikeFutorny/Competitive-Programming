#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>

using ll = long long;

using namespace std;



int main(){
ll i, j, n;

cin >> n;
float sum =0;

for(i=0;i<n;i++){
    cin >> j;
    sum += j;
}
cout << fixed << setprecision(5) << sum/n << endl;

return 0;
}