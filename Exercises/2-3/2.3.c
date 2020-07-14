#include <stdio.h>

int main()
{
    float price_type_1 = 3.50;
    float price_type_2 = 5.50;
    int type;
    int quantity;
    printf("What is the type: ");
    scanf("%d",&type);
    printf("What is the quantity: ");
    scanf("%d",&quantity);

    printf("The price is %2.2f",(price_type_1+(type-1)*(price_type_2-price_type_1))*quantity);

    return 0;

}