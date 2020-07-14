#include <stdio.h>

int main(){
    float userinput;
    printf("How many do you want to buy?: ");
    scanf("%f",&userinput);

    if (userinput > 50){
        printf("You'll pay %2.2f.", ((userinput*5)-((userinput*5)*0.15)));
    }
    else if (userinput > 30){
        printf("You'll pay %2.2f.", ((userinput*5)-((userinput*5)*0.1)));
    }
    else {
        printf("You'll pay %2.2f.", (userinput*5));
    }
    return 0;
}