# include <stdio.h>

int main(){
    int grades[10];
    int sum = 0;

    for (int i=0;i<10;++i){
        printf("%d > ",i+1);
        scanf("%d",&grades[i]);
        sum += grades[i];
    }
    printf("The grades average is: %2.2f\n",((float)sum/10));
    for (unsigned int i=0;i<10;++i){
        printf("The grade for %2u is %d\n",i+1,grades[i]);
    }
}