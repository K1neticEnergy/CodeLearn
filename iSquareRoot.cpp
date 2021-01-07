#include <iostream>
using namespace std;

float Q_rsqrt(float number) {
    long i;
    float x2, y;
    const float threeHalfs = 1.5f;

    x2 = 0.5f * number;
    y = number;
    i = * ( long* ) &y;
    i = 0x5F3759DF - (i >> 1);
    y = * ( float* ) &i;

    y = y * (threeHalfs - (x2 * y * y));
    return y;
}

int main(int argc, char **argv){
    float number;
    cin >> number;
    cout << Q_rsqrt(number);
    return 0;
}