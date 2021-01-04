#include <iostream>

using namespace std;

int main() {
    int length, i;
    int mang[20];
    cin >> length;
    for (i = 0; i < length; i++) mang[i] = 0;
    while (i >= 0) {
        for (i = 0; i < length; i++) cout << mang[i];
        cout << endl;
        i = length - 1;
        while ((i >= 0) && (mang[i] == 1)) i--;
        if (i >= 0) {
            mang[i] = 1;
            for (int k = 0; k < i; k++) mang[k] = 0;
        }
    }
    return 0;
}