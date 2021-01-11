#include <stdio.h>

int main(){
    int tCase, n, k, total = 0, result, i;
    scanf("%d", &tCase);

    WHILE:
        if (!(tCase)) goto END_WHILE;
        scanf("%d %d", &n, &k); 
        result = n;
        i = 1;
        FOR:
            if(!(i <= n)) goto END_FOR;
        BEGIN_STEP:
            total += i;
            if (total > k) goto IF_TRUE;
                           goto IF_FALSE;
            IF_TRUE:
                result = i - 1;
                goto END_FOR;
            IF_FALSE:

        END_STEP:
            i++;
            goto FOR;
        END_FOR:

        printf("%d\n", result);
        tCase--;
        goto WHILE;
    END_WHILE:

    // int tCase, n, k, total = 0;
    // scanf("%d", &tCase);
    // while (tCase) {
    //     scanf("%d %d", &n, &k); 

    //     int result = n;
    //     for(int i = 1; i <= n; i++) {
    //         total += i; 
    //         if(total > k) {
    //             result = i - 1;
    //             break;
    //         }

    //     }

    //     printf("%d\n", result);

    //     tCase--;
    // }
    return 0;
}