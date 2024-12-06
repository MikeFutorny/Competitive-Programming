#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
    }

    int unopenable = 0;

    for (int i = 0; i < n; i++) {
        bool canBeOpened = false;
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j] && i != j) { 
                canBeOpened = true;
                break;
            }
        }
        if (!canBeOpened) {
            unopenable++;
        }
    }

    cout << unopenable << endl;
    return 0;
}
