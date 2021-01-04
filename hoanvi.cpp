#include <iostream>
using namespace std;
void swapV(int &num1, int &num2) {
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main() {
    int length, mang[20], i;
    cin >> length;
    for (i = 0; i < length; i++) mang[i] = i + 1;
        
    while (i >= 0) {
        for (i = 0 ; i < length; i++) cout << mang[i];
        cout << endl;
        i = length - 2;
        while ((i >= 0) && (mang[i] > mang[i+1])) i--;
        if (i >= 0) {
            int k = length - 1;
            while (mang[k] < mang[i]) k--;
            swapV(mang[k], mang[i]);
            int a = i + 1;
            int b = length - 1;
            while (a < b) {
                swapV(mang[a],mang[b]);
                a++;
                b--;
            }
        }
    }

    system("pause");
    return 0;
}