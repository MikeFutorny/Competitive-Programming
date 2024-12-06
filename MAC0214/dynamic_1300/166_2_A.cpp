#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll i, j, a, b, c, d, n;

cin >> n;

while(true){
    n++;
    a = n%10;
    b = (n%100 - a)/10;
    c = (n%1000 - 10*b - a)/100;
    d = (n - c*100 - b*10 - a)/1000;
    if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
        cout << d*1000 + c*100 + b*10 + a <<endl;
        break; 
    }
}



return 0;
}