#include <iostream>
using namespace std;
int main (){
    unsigned long long n = 0;
    unsigned int m = 0;
    unsigned int p[] = {500, 200, 100, 50, 20, 10};
    cin >> n;
    for (unsigned int x = 0; x < 6; x++) {
        if (n >= p[x]) {
            m = n / p[x];
            cout << p[x] << ' ' << m << '\n';
            n -= p[x] * m;
        }
    }
    return 0;
}