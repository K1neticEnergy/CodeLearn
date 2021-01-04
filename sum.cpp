#include <iostream>

void input(int &number) {
    std::cin >> number;
}

int input() {
    int num;
    std::cin >> num;
    return num;
}

int tongUocChung(int a, int b) {
    int s = 0;
    for(int i = 1; i <= a; i++) {
        if(a % i == 0 && b % i == 0) s +=i;
    }
    return s;
}

void mySort(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a, b;
    a = input();
    input(b);
    std::cout << tongUocChung(a,b);
    mySort(a,b);
    std::cout << a << b;
    return 0;
}

