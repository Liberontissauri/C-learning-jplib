#include <stdio.h>

int main(){
    int userinput;
    
    while(userinput!=0){
        printf("Enter 0 to stop: ");
        scanf("%d", &userinput);
    }
    printf("Program finished\n");
}