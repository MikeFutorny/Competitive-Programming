#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    map<char, int> freq_s1;
    map<char, int> freq_s2;

    for (char c : s1) {
        if (c != ' ')
            freq_s1[c]++;
    }

    for (char c : s2) {
        if (c != ' ')
            freq_s2[c]++;
    }

    for (auto &p : freq_s2) {
        char c = p.first;
        int countNeeded = p.second;
        if (freq_s1[c] < countNeeded) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
