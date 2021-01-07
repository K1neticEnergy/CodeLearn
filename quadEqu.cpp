#include <stdio.h>
#include <math.h>


int main() {
    double a, b, c, delta, x, xi;
    scanf("%lf %lf %lf", &a, &b, &c);

    if(a == 0) goto S1;
               goto S2;
    S1:
        if(b == 0) goto S3;
                   goto S4;
    S3: 
        if(c == 0) goto S5;
                   goto S6;
    S5: 
        printf("Countless Solutions");
        goto END_MAIN;
    S6: 
        printf("No Solution");
        goto END_MAIN;
    S4: 
        printf("x = %0.2lf", (0 - c) / b);
        goto END_MAIN;

    S2:
        delta = b * b - 4 * a * c;
        x = (0 - b) / (2 * a);
        
        if(delta == 0) goto S7;
        if(delta > 0)  goto S8;
        if(delta < 0)  goto S9;
    S7:
        printf("x = %.2lf", x);
        goto END_MAIN;
    S8:
        xi = sqrt(delta) / (2 * a);
        printf("x1 = %.2lf\nx2 = %.2lf", x + xi, x - xi);
        goto END_MAIN;
    S9:
        xi = abs(sqrt(-delta) / (2 * a));
        printf("x1 = %.2lf + %.2lf * i\nx2 = %.2lf - %.2lf * i", x, xi, x, xi);

    END_MAIN:
    return 0;
}