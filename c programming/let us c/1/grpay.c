// calculate Ramesh's gross salary

#include <stdio.h>
int main()
{
    float bp,da,hra,grpay;
    printf("\nEnter thebasic salary of Ramesh:");
    scanf("%f",&bp);
    da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("Basic salary of Ramesh=%f\n",bp);
    printf("Dearness Allowness=%f\n",da);
    printf("House rent Allownce=%f\n",hra);
    printf("Gross pay of Ramesh=%f",grpay);
    
    return 0;
}