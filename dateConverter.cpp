#include <stdio.h>

int main(){
        unsigned int daysFromInit = 0; // it's Monday 
        unsigned int days, months, years, temp = 0, indexYear = 2000;

    TYPE_AGAIN:
        scanf("%d/%d/%d", &days, &months, &years);
        if(years < 2001) goto TYPE_AGAIN;
        if(years % 4 == 0) goto LUNAR_YEAR;
        temp = 0;
        goto YEAR_LOOP;
    LUNAR_YEAR:
        temp = 1;
        goto YEAR_LOOP;
    
    YEAR_LOOP:
        indexYear++;
        if (indexYear >= years) goto MONTH;
        if (indexYear % 4 == 0) goto CHECK_LUNAR_YEAR;
        daysFromInit += 365;
        goto YEAR_LOOP;
    CHECK_LUNAR_YEAR:
        daysFromInit += 366;
        goto YEAR_LOOP;
        
    //month
    MONTH:
        if (months == 1)     goto JANUARY;
        if (months == 2)     goto FEBRUARY;
        if (months == 3)     goto MARCH;
        if (months == 4)     goto APRIL;
        if (months == 5)     goto MAY;
        if (months == 6)     goto JUNE;
        if (months == 7)     goto JULY;
        if (months == 8)     goto AUGUST;
        if (months == 9)     goto SEPTEMBER;
        if (months == 10)    goto OCTOBER;
        if (months == 11)    goto NOVEMBER;
        if (months == 12)    goto DECEMBER;
                             goto TYPE_AGAIN;

    JANUARY:
        if(days > 31) goto TYPE_AGAIN;
        if(days < 1) goto TYPE_AGAIN;
        daysFromInit += days;
        goto NEXT;

    FEBRUARY:
        if(days < 1) goto TYPE_AGAIN;
        if (years % 4 == 0) goto FEB_LUNAR_YEAR;
        if (days > 28) goto TYPE_AGAIN;
        daysFromInit += (31 + days);
        goto NEXT;
    FEB_LUNAR_YEAR:
        if (days > 29) goto TYPE_AGAIN;
        daysFromInit += (31 + days);
        goto NEXT;

    MARCH:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (59 + temp + days);
        goto NEXT;

    APRIL:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 30) goto TYPE_AGAIN;
        daysFromInit += (90 + temp + days);
        goto NEXT;

    MAY:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (120 + temp + days);
        goto NEXT;
    
    JUNE:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 30) goto TYPE_AGAIN;
        daysFromInit += (151 + temp + days);
        goto NEXT;

    JULY:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (181 + temp + days);  
        goto NEXT;

    AUGUST:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (212 + temp + days);
        goto NEXT;

    SEPTEMBER:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 30) goto TYPE_AGAIN;
        daysFromInit += (243 + temp + days);
        goto NEXT;

    OCTOBER:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (273 + temp + days);
        goto NEXT;

    NOVEMBER:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 30) goto TYPE_AGAIN;
        daysFromInit += (304 + temp + days);
        goto NEXT;

    DECEMBER:
        if(days < 1) goto TYPE_AGAIN;
        if (days > 31) goto TYPE_AGAIN;
        daysFromInit += (334 + temp + days);
        goto NEXT;


    NEXT:
        if (daysFromInit % 7 == 1) goto MONDAY;
        if (daysFromInit % 7 == 2) goto TUESDAY;
        if (daysFromInit % 7 == 3) goto WEDNESDAY;
        if (daysFromInit % 7 == 4) goto THURSDAY;
        if (daysFromInit % 7 == 5) goto FRIDAY;
        if (daysFromInit % 7 == 6) goto SATURDAY;
        if (daysFromInit % 7 == 0) goto SUNDAY;
    MONDAY:
        printf("Monday");
        goto END_MAIN;
    TUESDAY:
        printf("Tuesday");
        goto END_MAIN;
    WEDNESDAY:
        printf("Wednesday");
        goto END_MAIN;
    THURSDAY:
        printf("Thursday");
        goto END_MAIN;
    FRIDAY:
        printf("Friday");
        goto END_MAIN;
    SATURDAY:
        printf("Saturday");
        goto END_MAIN;
    SUNDAY:
        printf("Sunday");
        goto END_MAIN;

    END_MAIN:
    return 0;
}