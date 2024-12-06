#include <iostream>
#include <vector>
#include <map>
#include <string>

using ll = long long;

using namespace std;


int main(){

ll i=0, j=0, a, temp;

cin >> a;

while(a>0){
    temp = a%10;
    if(temp==4 || temp==7){
        i++;
    }
    a = a/10;
}
bool flag;
if(i>0){
    flag = true;
}
else{
    flag = false;
}
while(i>0){
    temp = i%10;
    if(temp!=4 && temp!=7){
        flag=false;
        break;
    }
    i = i/10;
}
if(flag){
    cout << "YES" << endl;
}
else{
    cout << "NO" << endl;
}

}