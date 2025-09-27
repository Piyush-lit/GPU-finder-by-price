#include <stdio.h>
int main() {
    int bud;
    printf("Enter your budget: ");
    scanf("%d", &bud);
    printf("You have entered %d as your budget\n",bud);
    if (bud>15000 && bud<=20000){
        printf("The user can buy GeForce GTX 1650 Laptop GPU which is very low end.");
    }
    else if (bud>20000 && bud<=50000){
        printf("The user can buy GeForce MX550 Laptop GPU which is low end.");
    }
    else if (bud>50000 && bud<=65000){
        printf("The user can buy GeForce RTX 2050 Laptop GPU which is low to medium end.");
    }
     else if (bud>65000 && bud<=70000){
        printf("The user can buy GeForce RTX 3050 Laptop GPU which is medium end.");
    }
    else if (bud>70000 && bud<=100000){
        printf("The user can buy GeForce RTX 4050 Laptop GPU which is medium to high end.");
    }
    else if (bud>100000 && bud<=130000){
        printf("The user can buy GeForce RTX 4060 Laptop GPU which is high end.");
    }
    else if (bud>130000 && bud<=160000){
        printf("The user can buy GeForce RTX 4070 Laptop GPU which is high end.");
    }
    else if (bud>160000 && bud<=250000){
        printf("The user can buy GeForce RTX 4080 Laptop GPU which is very high end.");
    }
    else if (bud>250000){
        printf("The user can buy GeForce RTX 4090 Laptop GPU which is very high end.");
    }
    else {
        printf("The user cannot buy any gpu model");
    }
    
    return 0;
}
