#include <stdio.h>

int main(){
    long long number, i = 1, j;
    const long long underLimit = 1000;
    const long long overLimit = 1e11;

    RETYPE:
        scanf("%lld", &number);
        if(number < underLimit) goto RETYPE;
        if(number > overLimit) goto RETYPE;

    MAX_LOOP:
        i++;
        if(i > number) goto END_PROGRAM;      
        j = 2;
    PRIME_LOOP:
        if(j*j > i) goto PRINT_RESULT;
        if(i % j == 0) goto MAX_LOOP;
        j++;
        goto PRIME_LOOP;

    PRINT_RESULT:
        printf("%lld\n", i);
        
        goto MAX_LOOP;
    
    END_PROGRAM:
    return 0;
}