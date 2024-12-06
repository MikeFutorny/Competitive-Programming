#include <iostream>
#include <vector>
#include <map>

using ll = long long;
using namespace std;using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    const int M = 400000;
    vector<bool> p(M+1,true);
    p[0]=false;p[1]=false;
    for (int i=2;i*i<=M;i++) {
        if (p[i]) {
            for (int j=i*i;j<=M;j+=i) p[j]=false;
        }
    }
    auto c=[&](int x){return !p[x];};
    while (t--) {
        int n; cin>>n;
        if (n==2||n==3||n==4){cout<<-1<<"\n";continue;}
        vector<int>o,e;
        for(int i=1;i<=n;i++){
            if(i%2)o.push_back(i);else e.push_back(i);
        }
        int x=o.back(),y=-1;
        for(auto z:e)if(c(x+z)){y=z;break;}
        e.erase(find(e.begin(),e.end(),y));
        for(auto z:o)cout<<z<<" ";
        cout<<y<<" ";
        for(auto z:e)cout<<z<<" ";
        cout<<"\n";
    }
}
