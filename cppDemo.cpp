#include <iostream>
using namespace std;
int main(int argc, char **argv){
    int p =10;
    int* ptr = &p;
    *ptr = 9; //*ptr tra ve reference cua vung nho ma dia chi vung nho do la value of ptr
    const int a = 10;
    const int* ptr = &a; //pointer to an integer constant 
    return 0;
}