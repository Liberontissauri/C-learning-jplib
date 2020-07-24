//Tic-Tac-Toe
#include <stdio.h>

int main(){
    short choice;
    short board[3][3]={
        {0,0,0},
        {0,0,0},
        {0,0,0}};
    
    for(int turn=1; turn<=9; ++turn){
        printf("\n#########");
        for (int row=0; row<3;++row){
            printf("\n# ");
            for (int collumn=0; collumn<3; ++collumn){
                if(board[row][collumn]==1) printf("O ");

                else if(board[row][collumn]==2) printf("X ");

                else printf("  ");

            }
            printf("#");
        }
        printf("\n#########\n\n");

        if (turn%2==0) {
            printf("You're X, Make your Choice: ");
            scanf("%hd",&choice);
            --choice;
            if (board[choice/3][choice%3]==0) board[choice/3][choice%3] = 2;
            else printf("The Square Is already occupied, you lost your turn\n");
            }
        else {
            printf("You're O, Make your Choice: ");
            scanf("%hd",&choice);
            --choice;
            if (board[choice/3][choice%3]==0) board[choice/3][choice%3] = 1;
            else printf("The Square Is already occupied, you lost your turn\n");
            }
        for (int i=0;i<3;++i){
            if (board[i][0]==board[i][1] && board[i][0]==board[i][2] && board[i][0]!=0){
                if (board[i][0]==1) printf("Winner is O!!!\n");
                else printf("The Winner is X!!!\n");
                return 0;

            }
            else if(board[0][i]==board[1][i] && board[0][i]==board[2][i] && board[0][i]!=0){
                if (board[0][i]==1) printf("Winner is O!!!\n");
                else printf("The Winner is X!!!\n");
                return 0;
            }
        }
        if (board[0][0]==board[1][1] && board[0][0]==board[2][2] && board[0][0]!=0){
            if (board[0][0]==1) printf("Winner is O!!!\n");
            else printf("The Winner is X!!!\n");
            return 0;
        }
        if (board[0][2]==board[1][1] && board[0][2]==board[2][0] && board[0][2]!=0){
            if (board[0][2]==1) printf("Winner is O!!!\n");
            else printf("The Winner is X!!!\n");
            return 0;
        }
        


    }

}