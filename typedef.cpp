#include <iostream>
using namespace std;

typedef int    CONST_INT_VAR_4BYTE;
typedef float  CONST_FLOAT_VAR_4BYTE;
typedef char   CONST_CHAR_VAR_1BYTE;

typedef int*    CONST_INT_POINTER_4BYTE;
typedef float*  CONST_FLOAT_POINTER_4BYTE;
typedef char*   CONST_CHAR_POINTER_4BYTE;

typedef int&    CONST_INT_REFERENCE_4BYTE;
typedef float&  CONST_FLOAT_REFERENCE_4BYTE;
typedef char&   CONST_CHAR_REFERENCE_1BYTE;

int main(int argc, char **argv){
    CONST_CHAR_VAR_1BYTE str = 's';
    CONST_CHAR_REFERENCE_1BYTE refs = str; 
    CONST_CHAR_POINTER_4BYTE ptrStr = &str;
    cout << str << " " << refs << " " << ptrStr << endl;

    CONST_INT_VAR_4BYTE ivar = -1;
    CONST_INT_REFERENCE_4BYTE refi = ivar; 
    CONST_INT_POINTER_4BYTE ptri = &ivar;
    cout << ivar << " " << refi << " " << ptri << endl;

    CONST_FLOAT_VAR_4BYTE fvar = 4.25;
    CONST_FLOAT_REFERENCE_4BYTE reff = fvar; 
    CONST_FLOAT_POINTER_4BYTE ptrf = &fvar;
    cout << fvar << " " << reff << " " << ptrf << endl;
    if(ivar++) cout << ivar;
    return 0;
}