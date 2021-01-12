#include <stdio.h>
int main(){

    int sum = 0, number;
    scanf("%d", &number);
    // while(number) {
    //     sum += number % 10;
    //     number /= 10;
    // }
    // printf("%d", sum);

    WHILE:
        if(number) goto DO;
                   goto END_WHILE;
    DO:
        sum += number % 10;
        number /= 10; 
        goto WHILE;
    END_WHILE:
        printf("%d", sum);
    return 0;
}