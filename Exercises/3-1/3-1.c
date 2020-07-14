#include <stdio.h>

int main(){
    float userinput;
    printf("Type:\n1 for Celcius to Fahrenheit\nand\n2 for Fahrenheit to Celsius\n\n: ");
    scanf("%f",&userinput);
    printf("\nType the value: ");
    if (userinput==1){
        scanf("%f",&userinput);
        userinput *= 1.8;
        userinput += 32;
    }
    else{
        scanf("%f",&userinput);
        userinput -= 32;
        userinput *= 0.5556;
    }
    printf("The converted value is %2.2f",userinput);
    return 0;
}