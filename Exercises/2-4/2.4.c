#include <stdio.h>

int main(){
    float pay_week;
    int hours_worked;
    int dollars;

    printf("Enter the hours: ");
    scanf("%d",&hours_worked);
    printf("Enter the weekly pay: ");
    scanf("%f",&pay_week);

    dollars = pay_week/hours_worked;
    printf("Your average hourly pay is %d dollars and %0.0f cents.",dollars,100*((pay_week/hours_worked)-dollars));

    return 0;
}