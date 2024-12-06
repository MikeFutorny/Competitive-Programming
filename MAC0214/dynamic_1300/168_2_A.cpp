#include <iostream>
#include <vector>
#include <map>


using ll = long long;

using namespace std;


int main(){

ll i, j, a, b, c, d, n;


vector <vector <bool> > array(5, vector <bool> (5, true));

for(i=1;i<4;i++){
    for(j=1;j<4;j++){
        cin >> a;
        if(a%2==1){
            if(array[i-1][j]==false){
                array[i-1][j] = true;
            }
            else{
                array[i-1][j] = false;
            }
            if(array[i+1][j]==false){
                array[i+1][j] = true;
            }
            else{
                array[i+1][j] = false;
            }            
            if(array[i][j+1]==false){
                array[i][j+1] = true;
            }
            else{
                array[i][j+1] = false;
            }            
            if(array[i][j-1]==false){
                array[i][j-1] = true;
            }
            else{
                array[i][j-1] = false;
            } 
            if(array[i][j]==false){
                array[i][j] = true;
            } 
            else{
                array[i][j] = false;
            }      
        }
    }
}

for(i=1;i<4;i++){
    for(j=1;j<4;j++){
        cout << array[i][j];
    }
    cout << endl;
}


return 0;
}