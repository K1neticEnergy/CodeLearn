#include <iostream>

using namespace std;

int main() {
    int number, i;
    int sum[100];
    cin >> number;
    for (i = 0; i < number; i++) sum[i] = 1;
    while (i > 0) {
        i = number - 1;
        while ((i >= 0) && (sum[i] == 0)) i--;
        if (sum[i] >= sum[i-1]) {
            for (int j = 0; j <= i; j++) cout << sum[j];
            cout << endl;
        }
        if (i >= 0) {
            sum[i]--;
            sum[i-1]++;
            for (int j = 0; j < i - 1; j++) sum[j] = 1;
        }
    }
    return 0;
}