#include <stdio.h>

int main() {

    int num [5] = {1,2,3,4,5};
    printf("%d\n",num[0]);

    num[0] = 1;
    for(int count = 0;count < 5;count++)
    {
        printf("%d\t", num[count]);

    }

    return 0;
}