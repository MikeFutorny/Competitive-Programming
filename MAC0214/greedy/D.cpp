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




void PaintTree(vector< vector <ll> > &tree, ll n, ll colour, ll root, vector <ll> &current_colour){

ll i;

current_colour[root] = colour;

for(i=0;i<tree[root].size();i++){
    if(current_colour[tree[root][i]]!=colour){
        PaintTree(tree, n, colour, tree[root][i], current_colour);
    }
}
return;
}

void ChamaPaint(vector<vector <ll> > &tree, ll n, vector <ll> &c, ll root, vector <ll> &current_colour, ll &decretes){
    PaintTree(tree, n, c[root], root, current_colour);
    ll i;
    for(i=0;i<tree[root].size();i++){
        if(current_colour[tree[root][i]]!=c[tree[root][i]]){
            decretes++;
            cout << "besta";
            ChamaPaint(tree, n, c, tree[root][i], current_colour, decretes);
        }
    }
}


int main(){

ll n, i, j, decretes=0;

cin >> n;

vector <ll> p(n+1);
vector <ll> current_colour(n+1);

vector<vector<ll> > tree(n + 1);

for(i=1;i<n;i++){
    cin >> p[i];
    /*tree[i].push_back(p[i]);*/
    tree[p[i]].push_back(i+1);
}

vector <ll> c(n+1); 

for(i=1;i<=n;i++){
    cin >> c[i];
    current_colour[i]=0;
}



ChamaPaint(tree, n, c, 1, current_colour, decretes);

cout <<  decretes << endl;

return 0;
}