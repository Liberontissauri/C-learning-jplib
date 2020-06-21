#include <stdio.h>

int main()
{
    float inches;

    printf("Input the distance in inches: ");
    scanf("%f",&inches);

    printf("\n");

    printf("The distance in inches is %2.2f\n", inches);

    float foot = inches/12;
    printf("The distance in feet is %2.2f\n", foot);

    float yard = foot/3;
    printf("The distance in yards is %2.2f\n", yard);

    return 0;
}
