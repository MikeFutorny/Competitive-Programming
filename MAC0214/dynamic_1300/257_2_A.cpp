#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>
#include <iomanip>
#include <algorithm>
#include <unordered_map>

using ll = long long;

using namespace std;



int main(){
ll i, j, n, a, b, temp, cont=0, globalcont=0, m, max=-1, min_index=-1;
string s;

cin >> n >> m;


for(i=0;i<n;i++){
    cin >> temp;
    if(temp%m==0){
        temp = temp/m;
    }
    else{
        temp = temp/m + 1;
    }
    if(temp>=max || max==-1){
        max=temp;
        min_index=i+1;
    }

}



cout << min_index << endl;

return 0;
}