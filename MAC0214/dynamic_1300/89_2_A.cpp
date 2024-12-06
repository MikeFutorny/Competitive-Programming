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
ll i, j, n, a, b, temp, cont, globalcont=0;
string s;
set <char> conjunto;
conjunto.insert('a');
conjunto.insert('e');
conjunto.insert('i');
conjunto.insert('o');
conjunto.insert('u');
conjunto.insert('y');

cin >> s;
vector <char> saida;
for(i=0;i<s.length();i++){
    if(conjunto.find(tolower(s[i]))==conjunto.end()){
        saida.push_back('.');
        saida.push_back(tolower(s[i]));
    }
}

for(i=0;i<saida.size();i++){
    cout << saida[i];
}
cout << endl;

return 0;
}