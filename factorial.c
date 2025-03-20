#include <stdio.h>

int main()
{
    int product = 1;
    int i;
    for (i = 1; i <= 7; i++)
    {
        product = product * i;
    }

    printf("The factorial of 7 is:%d\n",product);
    return 0;
}