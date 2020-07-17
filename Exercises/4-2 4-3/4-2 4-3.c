#include <stdio.h>
#include <ctype.h>

int main(){
    for (int i = 0;i<126;i+=2){
        if(isgraph(i) && i<100) printf("%d  - %c                      %d - %c\n",i,i,i+1,i+1);
        else if (isgraph(i))    printf("%d - %c                      %d - %c\n",i,i,i+1,i+1);
        else{
            switch(i){
                case 0:
                    printf("0   - [NULL]                 1  - [START OF HEADING]\n");
                    break;
                case 2:
                    printf("2   - [START OF TEXT]        3  - [END OF TEXT]\n");
                    break;
                case 4:
                    printf("4   - [END OF TRANSMISSION]  5  - [ENQUIRY]\n");
                    break;
                case 6:
                    printf("6   - [ACKNOWLEDGE]          7  - [BELL]\n");
                    break;
                case 8:
                    printf("8   - [BACKSPACE]            9  - [HORIZONTAL TAB]\n");
                    break;
                case 10:
                    printf("10  - [NEW LINE]             11 - [VERTICAL TAB]\n");
                    break;
                case 12:
                    printf("12  - [NEW PAGE]             13 - [CARRIAGE RETURN]\n");
                    break;
                case 14:
                    printf("14  - [SHIFT OUT]            15 - [SHIFT IN]\n");
                    break;
                case 16:
                    printf("16  - [DATA LINK ESCAPE]     17 - [DEVICE CONTROL 1]\n");
                    break;
                case 18:
                    printf("18  - [DEVICE CONTROL 2]     19 - [DEVICE CONTROL 3]\n");
                    break;
                case 20:
                    printf("20  - [DEVICE CONTROL 4]     21 - [NEGATIVE ACKNOWLEDGE]\n");
                    break;
                case 22:
                    printf("22  - [SYNCHRONOUS IDLE]     23 - [END OF TRANS. BLOCK]\n");
                    break;
                case 24:
                    printf("24  - [CANCEL]               25 - [END OF MEDIUM]\n");
                    break;
                case 26:
                    printf("26  - [SUBSTITUTE]           27 - [ESCAPE]\n");
                    break;
                case 28:
                    printf("28  - [FILE SEPARATOR]       29 - [GROUP SEPARATOR]\n");
                    break;
                case 30:
                    printf("30  - [RECORD SEPARATOR]     31 - [UNIT SEPARATOR]\n");
                    break;
                case 32:
                    printf("32  - [SPACE]                33 - !\n");
                    break;
            }
        }
    }
    printf("%d - %c                      127 - [DEL]\n",126,126);
}