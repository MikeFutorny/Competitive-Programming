#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>

using ll = long long;

using namespace std;

using namespace std;

int main() {
    ll n, m;

    ifstream input("input.txt");
    ofstream output("output.txt");

    input >> n >> m;

    if (n >= m) {
        for (ll i = 0; i < m; i++) {
            output << "BG";
        }
        for (ll i = 0; i < n - m; i++) {
            output << "B";
        }
    } else {
        for (ll i = 0; i < n; i++) {
            output << "GB";
        }
        for (ll i = 0; i < m - n; i++) {
            output << "G";
        }
    }

    output << endl;
    input.close();
    output.close();

    return 0;
}
