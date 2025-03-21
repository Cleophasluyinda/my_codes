#include <stdio.h>

int main() 
{
    int num1,num2,i,sum;
    sum = 0;
    printf("Enter first number:");
    scanf("%d",&num1);

    printf("Enter second number:");
    scanf("%d",&num2);

    for(i = num1;i <= num2;i++){
        sum = sum + i;
    }
    printf("The total is:%d",sum);
    return 0;

}