#include <stdio.h>

int main(){
    int number, i, j;
    scanf("%d", &number);
    i = number;
    
    MAX_LOOP:
        if(i < 3) goto NO_SOLUTION;
        i--;
        j = 2;
    PRIME_LOOP:
        if(j*j > i) goto HAS_RESULT;
        if(i % j == 0) goto MAX_LOOP;
        j++;
        goto PRIME_LOOP;

    HAS_RESULT:
        printf("%d", i);
        goto END_PROGRAM;
    NO_SOLUTION:
        printf("No solution");
        goto END_PROGRAM;
    END_PROGRAM:
    return 0;
}