#include <iostream>
using namespace std;
int main(int argc, char **argv){
    const int a = 1;

    //pointer to a variable
    int var;                            // declare an integer variable "var"
    int* ptrVariable = &var;            // initialize a pointer named ptrVariable which points to var
    *ptrVariable = 5;                   // assign 5 to dereferenced ptrVariable, which now it's a reference to var

    //pointer to const
    int contain = 5;
    const int* ptrContain = &contain;   // initialize a pointer to an integer constant (ptrContain) which points to contain
    // *ptrContain = 5;                 // error: dereference ptrContain return a reference to an integer constant, which can't be assigned    

    //const pointer to a variable
    int i = 1;
    int * const constptr = &i;          // a constant pointer to integer variable = a pointer to integer variable 
    *constptr = 2;                      // dereference a constant pointer to integer variable return a reference to an variable
    // constptr = ptrContain;           // error: constptr is a constant pointer, which can't be assigned by ptrContain

    //const pointer to a const variable
    const int x = 2;
    const int * const ptrX = &x;        // a constant pointer to integer constant = a pointer to integer constant
    // ptrX = ptrVariable;              // error: ptrX is a constant pointer, which can't be assigned by ptrVariable
    //*ptrX = 5;                        // error: *ptrX is a reference to integer constant, which can't be assigned by 5
    int f = 3;
    const int * const ptrf = &f;        // usable: a constant pointer to a integer constant = a pointer to a integer (compatibility) 
    

    //reference
    int i = 56;
    int& ref = i;                       // reference to variable i
    ref = 154;                          // change value of i into 154  

    //reference to constant
    const int pi = 10;
    const int &refConst = pi;           // reference to constant integer pi
    //refConst = 5;                     // error: can't change value of constant pi


    return 0;
}