#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll n, t, i, j, a;

cin >> n;
string s;

for(j=0;j<n;j++){
    cin >> s;
    if(s.length()<=10){
        cout << s << endl;
    }
    else{
        if(s.length()>1){
            cout << s[0] << s.length()-2 << s[s.length()-1] << endl;
        }
        else{
            cout << s[0] << 0 << s[0] << endl;
        }
    }

}


return 0;
}