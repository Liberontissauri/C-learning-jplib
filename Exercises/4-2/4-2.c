#include <stdio.h>
#include <ctype.h>

int main(){
    for (int i = 0;i<126;i+=2){
        if(isgraph(i) && i<100) printf("%d  - %c   %d - %c\n",i,i,i+1,i+1);
        else if (isgraph(i)) printf("%d - %c  %d - %c\n",i,i,i+1,i+1);
    }
    printf("%d - %c\n",126,126);
}