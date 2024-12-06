#include <vector>
#include <iostream>
#include <map>
#include <algorithm>
#include <cmath>
#include <fstream>
#include <string>

using ll = long long;

using namespace std;


int main(){

ifstream infile("breedflip.in");
ofstream outfile("breedflip.out");

ll t, i, j, k, n, m, a, minTam, maxTam;

infile >> n;
string s1, s2;
infile >> s1 >> s2;

bool estado = true;
ll soma=0;

for(i=0;i<n;i++){
    if(s1[i]!=s2[i]){
        if(estado){
            estado=false;
            soma++;
        }
    }
    else{
        if(!estado){
            estado = true;
        }
    }


}

outfile << soma << endl;

infile.close();
outfile.close();


return 0;
}