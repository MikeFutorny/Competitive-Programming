#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>
#include <set>
using ll = long long;

using namespace std;

int main(){
    ll i, j, k, m, n, a, b;
    ll min=-1, max=-1;
    ll index =-1;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> a >> b;
        if((a<=min||min==-1) && b>=max){
            min=a;
            max = b;
            index=i+1;
        }
        else if(b>max){
            index=-1;
            max = b;
        }
        else if(a<min){
            index=-1;
            min = a;
        }
    }

cout << index << endl;

return 0;
}