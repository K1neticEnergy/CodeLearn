#include <stdio.h>
int main(){

    unsigned long long number, base, result = 0, digit = 0, power = 1;
    scanf("%d %d", &number, &base);
    // while (number) {
    //     digit = number % base;
    //     result += digit * power;
    //     number /= base; 
    //     power *= 10;
    // }

    // printf("%lld", result);

    WHILE:
        if(number > 0) goto DO;
                   goto END_WHILE;
    DO:
        digit = number % base;
        result += digit * power;
        number /= base; 
        power *= 10;
        goto WHILE;
    END_WHILE:
    printf("%lld", result);

    return 0;
}