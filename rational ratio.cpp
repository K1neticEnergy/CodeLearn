#include <iostream>
#include <cmath>
#include <cstdio>

int GCD(int a, int b) {
    int r;
    while (b > 0) {
        r = b;
        b = a % b;
        a = r;
    }
    return a;
}

int digit9(int a) {
    int b = 0;
    for(int i = a; i >= 1; i--) {
        b += 9 * pow(10, i);
    }
    return int(b);
}

int main() {
    float i;
    double intPart, floatPart, temp;
    int k, j = 0;
    scanf("%3.11f", &i);
    scanf("%d", &k);
    temp = floatPart = modf(i, &intPart);

    while (temp > pow(10, -k)) {
        temp *= 10;
        temp -= trunc(temp);
        j++;
    }
    
    int mau = GCD(digit9(j), int(floatPart * pow(10, j)));

    std::cout << mau;


    return 0;
}