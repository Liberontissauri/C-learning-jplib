#include <stdio.h>
#define __STDC_WANT_LIB_EXT1__ 1
#include <string.h>

int main(){
    char string1[10] = "test\n";
    printf("%s",string1);
    printf("%zu\n",strlen(string1));

}