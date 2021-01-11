#include <stdio.h>

int main(){
    int i = 1,j;

    FOR_LOOP:
        if(!(i < 100)) goto END_LOOP; 
    BEGIN_STEP:   
        
        j = 2;
        WHILE_LOOP:
        CONTINUE:
            if(j >= i) goto EXIT_WHILE_LOOP;

            if((i % j)) goto END_IF;
                printf("%d is first  divisor of %d", j, i);
                goto BREAK;
            END_IF:
 
            j += 1;
            goto CONTINUE;
            goto WHILE_LOOP;
        EXIT_WHILE_LOOP:
        BREAK:

        DO_WHILE:
            printf("-");
	        j++;
        if(j % i) goto DO_WHILE;
    
        printf("\n");

    END_STEP:
        i++;
        goto FOR_LOOP;  
    END_LOOP:

    return 0;
}