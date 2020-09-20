#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char buf[1000];
    int nletters = 0;
    int npunct = 0;
    int ndigits = 0;

    printf("Type a string: ");
    if (!fgets(buf, sizeof(buf)/8, stdin)){
        printf("ERROR READING STRING");
        return 1;
    }

    int i = 0;
    while(buf[i]){
        if (isdigit(buf[i])) ndigits++;
        else if (ispunct(buf[i])) npunct ++;
        else if (isalpha(buf[i])) nletters++;
        ++i;
    }
    printf("The string has %d letters, %d digits and %d punctuation characters.\n", nletters, ndigits, npunct);
}