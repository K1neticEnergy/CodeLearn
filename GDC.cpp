#include <stdio.h>
int main(){

// use Euclid
// digit sum
// convert number base b
    // int a, b, temp;
    // scanf("%d %d", &a, &b);
    
    
    // do {
    //     if(a > b) a = a - b;
    //     else b = b - a; 
    // } while(a != b);
    int a, b, temp;
    scanf("%d %d", &a, &b);
    if (a == 0) goto RESULT_A_0;
    if (b == 0) goto RESULT_B_0;
                goto GCD;

    GCD:
    DO:
        if (a > b) goto A_GREATER_B;
        b = b - a;
        goto WHILE;
        A_GREATER_B:
        a = a - b;
    WHILE:
        if(a != b) goto DO;
    goto RESULT;

    RESULT_A_0:
        printf("%d", b);
    RESULT_B_0:
        printf("%d", a);
    RESULT:
    printf("%d", a);

    return 0;
}