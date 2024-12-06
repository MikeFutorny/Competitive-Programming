#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <cmath>

using ll = long long;

using namespace std;



int main(){

ll i, j, n, a;

cin >> n;

ll max=-1, min=-1, max_i, min_i;

for(i=0;i<n;i++){
    cin >> a;
    if(a>max || max==-1){
        max = a;
        max_i = i;
    }
    if(a<=min || min==-1){
        min = a;
        min_i = i;
    }
}
ll resposta=0;

resposta+=n-min_i-1;
resposta+=max_i;

if(max_i>min_i){
    resposta--;
}
cout << resposta << endl;

}