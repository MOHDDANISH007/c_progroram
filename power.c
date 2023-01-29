#include<stdio.h>
#include<math.h>
int main()
{
    int num1,num2;
    printf("\n ENTER THE NUMBER1:");
    scanf("%d",&num1);
    printf("\n ENTER THE NUMBER2:");
    scanf("%d",&num2);
    if(num1>num2)
    printf("\n THE NUMBER1 IS GREATER THEN THE NUMBER2 %d",num1);
    else 
    printf("\n THE NUMBER2 IS GREATER THEN THE NUMBER1 %d",num2);   
    return 0;
}
