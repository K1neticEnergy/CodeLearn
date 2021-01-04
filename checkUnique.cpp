//program to check if the array is duplicated or not
#include <iostream>
using namespace std;
int main() {
    int a[5];
    for(int i = 0; i < 5; i++) {
        cin >> a[i];
    }
    bool unique = true;
    for(int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) if(a[i] == a[j]) {
            unique = false;
            break;
        }
    }

    if(unique) cout << "ALL UNIQUE";
    else cout << "DUPLICATES";
    
    return 0;
}