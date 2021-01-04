#include <iostream>

using namespace std;

int main() {
    int k, i, n;
    int mang[20];
    cin >> n >> k;
    for (i = 0; i < k; i++) mang[i] = i + 1;
    while (i >= 0) {
        for (i = 0; i < k; i++) cout << mang[i];
        cout << endl;
        i = k - 1;
        while ((i >= 0) && (mang[i] == n - k + i + 1)) i--;
        if (i >= 0) {
            mang[i]++;
            for (int l = i + 1; l < k; l++) mang[l] = mang[l-1] + 1;
        }
    }
    return 0;
}