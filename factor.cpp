#include <stdio.h>
int main(){
    
    int number;
    bool checkPrime = true;
    scanf("%d", &number);
    // for(int i = 2, count = 0, n = number; i <= number; i++) {
    //     for(int j = 2; j * j <= i; j++) {
    //         if(i % j == 0) {
    //             checkPrime = false;
    //             break;
    //         }
    //     }
    //     if(checkPrime) {
    //         while (n % i == 0) {
    //             count++;
    //             n /= i;
    //         }
    //         if (count) {
    //             printf("%d %d\n", i, count);
    //             count = 0;             
    //         }
    //     }
    //     checkPrime = true;
    // }

    int i = 2, count = 0, n = number, j;
    FOR_1:
        if(i <= number) goto BEGIN_STEP1;
                        goto END_LOOP_1;
    BEGIN_STEP1:

    j = 2;
        FOR_2:
            if(j * j <= i) goto BEGIN_STEP2;
                            goto END_LOOP_2;
        BEGIN_STEP2:
            if(i % j == 0) goto IF_TRUE_1;
                        goto IF_FALSE_1;
            IF_TRUE_1:
                checkPrime = false;
                goto END_LOOP_2;
            IF_FALSE_1:
    

    END_STEP2:
        j++;
        goto FOR_2;
    END_LOOP_2:

    if(checkPrime) goto IF_TRUE_2;
                   goto IF_FALSE_2;
        IF_TRUE_2:
            WHILE:
                if(n % i == 0) goto DO;
                               goto END_WHILE;
            DO:
                count++;
                n /= i;
                goto WHILE;
            END_WHILE:
        IF_FALSE_2:
            if(count) goto IF_TRUE_3;
                      goto IF_FALSE_3;
            IF_TRUE_3:
                printf("%d %d\n", i, count);
                count = 0;   
            IF_FALSE_3:
        checkPrime = true;
    END_STEP1:
        i++;
        goto FOR_1;
    END_LOOP_1:

    return 0;
}