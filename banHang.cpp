#include <stdio.h>

int main(){
    short select;
    int total = 0;
    unsigned long long yourChoices = 0;
    printf("May ban hang tu dong xin han hanh phuc vu quy khach\n", "==========================================================\n");
    MAIN_MENU:
        printf("Moi quy khach chon:\n",
        "\t1: Nuoc ngot\n",
        "\t2: Do an nhanh\n",
        "\t3: Do an chinh\n",
        "\tKhach da chon:");

    RETYPE_MAIN_MENU:
        scanf("%d", &select);

        if(select == 1) goto DRINK;
        if(select == 2) goto FAST_FOOD;
        if(select == 3) goto MAIN_COURSE;
                        goto RETYPE_MAIN_MENU;

    DRINK:
        printf("Moi quy khach chon:\n",
        "\t1: COKE (10K)\n",
        "\t2: SPRITE (10K)\n",
        "\t3: PEPSI (10K)\n",
        "\t0: Tro lai\n"
        "\tKhach da chon:");
    RETYPE_MAIN_COURSE:
        scanf("%d", &select);
        if(select == 1) goto COKE;
        if(select == 2) goto SPRITE;
        if(select == 3) goto PEPSI;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_MAIN_COURSE;

    COKE://10k
        yourChoices *= 10 + 1;
        total += 10;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU; 
    SPRITE://10k
        yourChoices *= 10 + 2;
        total += 10;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU; 
    PEPSI://10k
        yourChoices *= 10 + 3;
        total += 10;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU; 

    FAST_FOOD:
        printf("Moi quy khach chon:\n",
        "\t1: BURGER (40K)\n",
        "\t2: NUGGET (30K)\n",
        "\t3: BANHMI (20K)\n",
        "\t0: Tro lai\n"
        "\tKhach da chon:");
    RETYPE_FAST_FOOD:
        scanf("%d", &select);
        if(select == 1) goto COKE;
        if(select == 2) goto SPRITE;
        if(select == 3) goto PEPSI;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_FAST_FOOD;

    BURGER://40K
        yourChoices *= 10 + 4;
        total += 40;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU;
    NUGGET://30K
        yourChoices *= 10 + 5;
        total += 30;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU;
    BANHMI://20K
        yourChoices *= 10 + 6;
        total += 20;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU;

    MAIN_COURSE:
        printf("Moi quy khach chon:\n",
        "\t1: STEAK     (50K)\n",
        "\t2: PHO       (40K)\n",
        "\t3: COM SUON  (30K)\n",
        "\t0: Tro lai\n"
        "\tKhach da chon:");
    RETYPE_MAIN_COURSE:
        scanf("%d", &select);
        if(select == 1) goto STEAK;
        if(select == 2) goto PHO;
        if(select == 3) goto COM_SUON;
        if(select == 0) goto MAIN_MENU;
                        goto RETYPE_MAIN_COURSE;

    STEAK://50K
        yourChoices *= 10 + 7;
        total += 50;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU;
    PHO://40K
        yourChoices *= 10 + 8;
        total += 40;
        printf("Da xong? (y/n) ");
        goto MAIN_MENU;
    COM_SUON://30K
        yourChoices *= 10 + 9;
        total += 30;
        printf("Da xong? (y/n) ");

        goto MAIN_MENU;
    
    return 0;
}