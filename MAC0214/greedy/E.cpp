#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>
#include <utility>

using ll = long long;

using namespace std;


int main(){

ll i, j, n, m, k, temp;

cin >> n;

string s;

cin >> s;

if(n%2==1 || s[0] == ')' || s[n-1]=='('){
    cout << ":(" << endl;
}

else{
    ll esq_global=0;
    ll dir_global=0;

    for(i=0;i<n;i++){
        if(s[i]=='('){
            esq_global++;
        }
        else if(s[i]==')'){
            dir_global++;
        }
    }
    ll esq = n/2-esq_global;
    ll dir = n/2-dir_global;
    ll current_dir=0;
    ll current_esq=0;
    if(esq<0 || dir<0){
        cout << ":(" << endl;
    }
    else{
        vector <char> array;
        bool flag = true;
        for(i=0;i<n;i++){
            if(s[i]=='('){
                current_esq++;
                array.pusb cxh_back('(');     
            }
            if(s[i]==')'){
                current_dir++;
                array.push_back(')');
            }
            if(s[i]=='?'){
                if(esq>0){
                    current_esq++;
                    array.push_back('(');
                    esq--;
                }
                else{
                    array.push_back(')');
                    current_dir++;
                    dir--;
                }
            }
            if(current_dir>=current_esq && i!=n-1){
                flag = false;
                break;
            }
        }
        if(flag){
            esq=0;
            dir=0;
            for(i=0;i<n;i++){
                if(array[i]=='('){
                    esq++;
                }
                if(array[i]==')'){
                    dir++;
                }
                if(dir>=esq&&i!=n-1){
                    cout << ":(" << endl;
                    flag = false;
                    break;
                }
            }  
            if(flag){
                for(i=0;i<n;i++){
                    cout << array[i];
                }
                cout << endl;
            }
        }
        else{
            cout << ":(" << endl;
        }
    }
}

return 0;
}