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
ll a, b, c, i, temp, soma=0, global, x, y, z;
bool flag = true;

cin >> a >> b >> c;


y = sqrt((c*a)/b);
z = b*y/a;
x = a/y;
cout << (x+y+z)*4 << endl;
return 0;
}