#include <stdio.h>
int main(){
    long long x, i = 1;
    scanf("%lld", &x);

    FOR:
        if(i <= x) goto BEGIN;
                   goto END_FOR;
    BEGIN:
        if((i ^ x) == (i + x)) goto PRINTF;
                               goto END;
        PRINTF:
            printf("%d ", i);
    END:
        i++;
        goto FOR;
    END_FOR: 

    return 0;
}