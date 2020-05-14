#include <stdio.h>

int main(void)
{
    float radius = 0.0f;
    float diameter = 0.0f;
    float circumference = 0.0f;
    float area = 0.0f;
    float pi = 3.14159265f;

    printf("Input the diameter of the table: ");
    scanf("%f", &diameter);

    radius = diameter/2.0f;
    circumference = 2.0*pi*radius;
    area = pi*radius*radius;
    
    printf("\nThe circumference of the table's surface is %.2f", circumference);
    printf("\nThe area of the table is %.2f\n", area);

    return 0;
}

