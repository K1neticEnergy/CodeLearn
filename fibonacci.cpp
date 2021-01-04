#include <iostream>

int main() {
    unsigned long long a,b,c,n;
    a = b = c = 1;
    std::cin >> n;
    for (unsigned long long i = 3; i <= n; i++) {
        a = b;
        b = c;
        c = a + b;
    }
    std::cout << c << " ";
}