#include <stdio.h>

int main(){
    unsigned char size;
    printf("Enter the size of the table: ");
    scanf("%d",&size);

    for (unsigned char y=0;y<=size;y++){
        for (unsigned char x=0;x<=size;x++){
            if (y==0){
                if (x==0) printf("#");
                else printf("   %d",x);
            }
            else {
                if (x==0) printf("%d",y);
                else printf("   %d",x*y);
            }
        }
        printf("\n");
    }
}