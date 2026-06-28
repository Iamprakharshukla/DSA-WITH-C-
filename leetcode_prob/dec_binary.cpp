#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int ans = 0;
    int i = 0;

    while (n != 0) {
        int bit = n & 1;

        int value = 1;
        for (int j = 0; j < i; j++) {
            value *= 10;
        }

        ans += bit * value;

        cout << "bit=" << bit
             << " value=" << value
             << " ans=" << ans << endl;

        n >>= 1;
        i++;
    }

    cout << "Final = " << ans << endl;
}