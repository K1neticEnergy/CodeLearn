#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char **argv) {
    double a,b,c,delta,x,xi;
    double *ptrA = &a, *ptrB = &b, *ptrC = &c, *ptrDelta = &delta, *ptrX = &x, *ptrXi = &xi;

    scanf("%lf %lf %lf", ptrA, ptrB, ptrC);
    
    if(*ptrA == 0) {
        if (*ptrB == 0 && *ptrC == 0) printf("Countless solutions");
        else if(*ptrB == 0) printf("No solution");
        
        else printf("x = %.2lf", (0 - *ptrC) / *ptrB);
    }

    else {
        *ptrDelta = (*ptrB)*(*ptrB) - 4*(*ptrA)*(*ptrC);
        *ptrX = (0 - (*ptrB)) /(2*(*ptrA));

        
        
        if((*ptrDelta) == 0) {
            printf("x = %.2lf", *ptrX);
        }
        else if ((*ptrDelta) > 0) {
            *ptrXi = sqrt(*ptrDelta) / (2*(*ptrA));
            printf("x1 = %.2lf \nx2 = %.2lf", (*ptrX) + (*ptrXi), (*ptrX) - (*ptrXi));
        }
        else {
            *ptrXi = abs(sqrt(-(*ptrDelta)) / (2*(*ptrA)));
            if (*ptrX != 0) printf("x1 = %.2lf + %.2lf * i \nx2 = %.2lf - %.2lf * i", (*ptrX), (*ptrXi), (*ptrX), (*ptrXi));
            else printf("x1 = %.2lf * i \nx2 = -%.2lf * i", *ptrXi, *ptrXi);
        }
    }

}