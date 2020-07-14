#include <stdio.h>

int main()
{
    int var1 = 5;

    switch(var1)
    {
        case 4:
            printf("Case 1");
            break;
        case 3:
            printf("Case 2");
            break;
        case 2:
            printf("Case 3");
            break;
        default:
            printf("DEFAULT");
            break;
    }
}