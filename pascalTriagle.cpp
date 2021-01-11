#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    printf("%d\n", 1);

    int i = 1, j, k;
    long double p;
    FOR_1:
        if (!(i <= n)) goto END_FOR_1;
    BEGIN_STEP_FOR_1:

        p = 1;
        j = 0;
        k = i + 1;
        FOR_2:
            if (!(j <= i)) goto END_FOR_2;
        BEGIN_STEP_FOR_2:
            if (j == 0 || j == i) goto IF_TRUE;
                                  goto IF_FALSE;

            IF_TRUE:
                printf("%d ", 1);
                goto END_IF;
            IF_FALSE:
                p *= (1.0 * k / j); 
                printf("%lld ", (unsigned long long)p);            
            END_IF:

        END_STEP_FOR_2:
            j++;
            k--;
            goto FOR_2;
        END_FOR_2:

        printf("\n");
    END_STEP_FOR_1:
        i++;
        goto FOR_1;
    END_FOR_1:   

    
    // int n;
    // scanf("%d", &n);
    // printf("%d\n", 1);
    // for(int i = 1; i <= n; i++) {
    //     long double p = 1;
    //     for(int j = 0, k = i + 1; j <= i; j++, k--) {
    //         if (j == 0 || j == i) printf("%d ", 1);
    //         else {
    //             p *= 1.0 * k / j; 
    //             printf("%lld ", (unsigned long long)p);
    //         }
    //     }
    //     printf("\n");
    // }    


    return 0;
}