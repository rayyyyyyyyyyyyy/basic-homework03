#include <stdio.h>
#include <stdlib.h>
int main(void)
{
   float height,m,weight,BMI; 

    printf("該使用者的BMI資訊\n"); 

    printf("你的身高為：");

    scanf("%f",&height);

    printf("你的體重為：");

    scanf("%f",&weight);

    printf("======================\n");

    m=height/100;

    BMI=weight/(m*m);

    printf("BMI = %.2f\n\n",BMI);

    system("pause");

    return 0;
}
