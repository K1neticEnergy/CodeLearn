#include <iostream>

int main() {
    int a[5];
    for(int i = 0; i < 5; i++) {
        std::cin >> a[i];
    }
    int max = a[0], min = a[0];
    for(int i = 1; i < 5; i++) {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }

    std::cout << max << " " << min;
    return 0;
}