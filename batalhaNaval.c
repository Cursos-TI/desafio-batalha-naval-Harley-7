#include <stdio.h>

int main() {

    int linha [10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//array da linha do tabuleiro  
    char coluna [10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};//array da coluna do tabuleiro
    
    //Tabuleiro
    int tabuleiro[10][10] = {
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,3,3,3,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
    }; 

    //Saída da coluna com estrutura de repetição for com estrutura condicional para uma melhor formatação do Tabuleiro  
    for(int i = 0; i<=9; i++){

        if(i == 0){

            printf("   %c ", coluna[i]);

        }else if(i <= 8){

            printf("%c ", coluna[i]);

        }else{

            printf("%c\n", coluna[i]);

        }

    }

    //Estrutura de repetição aninhada para saída do tabuleiro e da linha
    for (int i = 0; i <= 9; i++)
    {
        //Saída da linha do Tabuleiro com estrutura condicional para uma melhor formatação do Tabuleiro
        if(i <=8){

            printf(" %d ", linha[i]);

        }else{

            printf("%d ", linha[i]);

        }
        
        for (int j = 0; j <= 9; j++)        
        {

            printf("%d ", tabuleiro[i][j]);

            if(j == 9){

                printf("\n");

            }

        } 

    }
    
    return 0;
}
