#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int ans = -1;
    for (int x = 0; x * a <= n; x++) {
        for (int y = 0; x * a + y * b <= n; y++) {
            int rem = n - (x * a + y * b);
            if (rem % c == 0 && rem >= 0) {
                int z = rem / c;
                ans = max(ans, x + y + z);
            }
        }
    }

    cout << ans << "\n";
    return 0;
}
