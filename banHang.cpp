#include <stdio.h>

int main(){
    short select;
    int total = 0;
    short countPepsi = 0, countCoke = 0, countSprite = 0, countBurger = 0, countNugget = 0, countBanhmi = 0, countSteak = 0, countPho = 0, countComsuon = 0;
    printf("May ban hang tu dong xin han hanh phuc vu quy khach\n==========================================================\n");
    MAIN_MENU:
        printf("Moi quy khach chon:\n");
        printf("\t1: Nuoc ngot\n");
        printf("\t2: Do an nhanh\n");
        printf("\t3: Do an chinh\n");
        printf("Khach da chon:");

    RETYPE_MAIN_MENU:
        scanf("%d", &select);

        if(select == 1) goto DRINK;
        if(select == 2) goto FAST_FOOD;
        if(select == 3) goto MAIN_COURSE;
                        goto RETYPE_MAIN_MENU;

    DRINK:
        printf("Moi quy khach chon:\n");
        printf("\t1: COKE (10K)\n");
        printf("\t2: SPRITE (10K)\n");
        printf("\t3: PEPSI (10K)\n");
        printf("\t0: Tro lai\n");
        printf("Khach da chon:");
    RETYPE_DRINK:
        scanf("%d", &select);
        if(select == 1) goto COKE;
        if(select == 2) goto SPRITE;
        if(select == 3) goto PEPSI;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_DRINK;

    COKE://10k
        countCoke++;
        total += 10;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
                    
    SPRITE://10k
        countSprite++;
        total += 10;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
    PEPSI://10k
        countPepsi++;
        total += 10;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;

    FAST_FOOD:
        printf("Moi quy khach chon:\n");
        printf("\t1: BURGER (40K)\n");
        printf("\t2: NUGGET (30K)\n");
        printf("\t3: BANHMI (20K)\n");
        printf("\t0: Tro lai\n");
        printf("Khach da chon:");
    RETYPE_FAST_FOOD:
        scanf("%d", &select);
        if(select == 1) goto BURGER;
        if(select == 2) goto NUGGET;
        if(select == 3) goto BANHMI;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_FAST_FOOD;

    BURGER://40K
        countBurger++;
        total += 40;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
    NUGGET://30K
        countNugget++;
        total += 30;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
    BANHMI://20K
        countBanhmi++;
        total += 20;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;

    MAIN_COURSE:
        printf("Moi quy khach chon:\n");
        printf("\t1: STEAK     (50K)\n");
        printf("\t2: PHO       (40K)\n");
        printf("\t3: COM SUON  (30K)\n");
        printf("\t0: Tro lai\n");
        printf("Khach da chon:");
    RETYPE_MAIN_COURSE:
        scanf("%d", &select);
        if(select == 1) goto STEAK;
        if(select == 2) goto PHO;
        if(select == 3) goto COM_SUON;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_MAIN_COURSE;

    STEAK://50K
        countSteak++;
        total += 50;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
    PHO://40K
        countPho++;
        total += 40;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0) goto CHECKOUT;
                      goto MAIN_MENU;
    COM_SUON://30K
        countComsuon++;
        total += 30;
        printf("Da xong? (0/1)");
        scanf("%d", &select);
        if (select == 0)    goto CHECKOUT;
                            goto MAIN_MENU;
    
    CHECKOUT:

        if(countCoke == 0) goto PRINT_SPRITE;
        printf("COKE      %d    %3ld\n", countCoke, countCoke * 10000);

    PRINT_SPRITE:
        if(countSprite == 0) goto PRINT_PEPSI;
        printf("SPRITE    %d    %3ld\n", countSprite, countSprite * 10000);

    PRINT_PEPSI:
        if(countPepsi == 0) goto PRINT_BURGER;
        printf("PEPSI     %d    %3ld\n", countPepsi, countPepsi * 10000);

    PRINT_BURGER:
        if(countBurger == 0) goto PRINT_NUGGET;
        printf("BURGER    %d    %3ld\n", countBurger, countBurger * 40000);

    PRINT_NUGGET:
        if(countNugget == 0) goto PRINT_BANHMI;
        printf("NUGGET    %d    %3ld\n", countNugget, countNugget * 30000);

    PRINT_BANHMI:
        if(countBanhmi == 0) goto PRINT_STEAK;
        printf("BANH MI   %d    %3ld\n", countBanhmi, countBanhmi * 20000);

    PRINT_STEAK:
        if(countSteak == 0) goto PRINT_PHO;
        printf("STEAK     %d    %3ld\n", countSteak, countSteak * 50000);

    PRINT_PHO:
        if(countPho == 0) goto PRINT_COMSUON;
        printf("PHO       %d    %3ld\n", countPho, countPho * 40000);

    PRINT_COMSUON:
        if(countComsuon == 0) goto PRINT_TOTAL;
        printf("COM SUON  %d    %3ld\n", countComsuon, countComsuon * 30000);

    PRINT_TOTAL:
        printf("\n%d", total * 1000);

    return 0;
}