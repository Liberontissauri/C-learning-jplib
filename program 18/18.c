#include <stdio.h>

int main(){
    long count = 0.0L;
    for (int i=1; i<=100;++i){
        for (int i=1;i<=100;i++){
            count += 1;
            if (count == 200){
                goto out;
            }
        }
    }
    printf("Finished Loop\n");
    out:
    printf("Finished Program\n");
}