#include <stdio.h>

int main() 
{
    int a;
    printf("Menu\t\t");
    printf("-------------------------\n");
    printf("1 - Microsoft Word\n");
    printf("2 - Yahoo\n");
    printf("3 - AutoCAD\n");
    printf("4 - Java Games\n");
    printf("--------------------------\n");

    printf("Select your choice: \t");
    scanf("%d", &a);

    switch(a)
    {
        case 1:
            printf("Application software");
            break;
        
        case 2:
            printf("Web browser");
            break;

        case 3:
            printf("Computer Aided Design software");
            break;
        
        case 4:
            printf("Embedded software");
            break;

        default:
             printf("Invalid Entry");       
        

    }

    return 0;
}