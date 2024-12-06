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

void dfs(vector< vector <ll> > &tree, ll &decretes, ll vertice, vector <ll> &c, ll parent){

    if(c[vertice]!=c[parent]){
        decretes++;
    }
    ll i;
    for(i=0;i<tree[vertice].size();i++){
        dfs(tree, decretes, tree[vertice][i], c, vertice);
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


c[0] = 0;

dfs(tree, decretes, 1, c, 0);


cout <<  decretes << endl;

return 0;
}