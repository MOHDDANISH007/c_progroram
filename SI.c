#include<stdio.h>
int main()
{
    int p,r,t;
    float si;
    float total_amount;
    printf("\n ENTER PRINCIPAL AMOUNT:");
    scanf("%d",&p);
    printf("\n ENTER RATE OF INTREST:");
    scanf("%d",&r);
    printf("\n ENTER THE DURATION OF TIME:");
    scanf("%d",&t);
    si=(float)(p*r*t)/100;
    printf("\n SIMPLE INTREST IS %f",si);
    total_amount=p+si;
    printf("\n THE TOTAL AMOUNT IS %f",total_amount);
    return 0;
}
