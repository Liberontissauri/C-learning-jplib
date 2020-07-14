#include <stdio.h>

int main()
{
    float l;
    float w;

    printf("insert the room's width (cm): ");
    scanf("%f", &w);
    printf("insert the room's lenght (cm): ");
    scanf("%f", &l);

    printf("The room's area is %2.2fm", (w*l)/100);

    return 0;
}