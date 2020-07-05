#include <stdio.h>
#include <stdlib.h>

int main()
{
    char player [256];
    char player2 [256];

    printf("Jogador 1 realize a sua jogada: ");
    scanf("%s",&player);

    printf("\nJogador 2 realize a sua jogada: ");
    scanf("%s",&player2);

    printf("\nCalculando o resultado...\n");
    if (strcmp(player,"pedra") == 0) {
        if(strcmp(player2,"pedra") == 0){
            printf("\n- - - - - EMPATE! - - - - -");
        }else if(strcmp(player2,"papel") == 0) {
            printf("\n- - - - - JOGADOR 2 VENCEU! - - - - - ");
        }else if(strcmp(player2, "tesoura") == 0) {
            printf("\n- - - - - JOGADOR 1 VENCEU! - - - - - ");
        }else{
            printf("- - - - - O JOGADOR 2 REALIZOU UMA JOGADA INVALIDA - - - - - ");
        }


    }else if (strcmp(player,"papel") == 0) {
        if(strcmp(player2,"pedra") == 0){
            printf("\n- - - - - JOGADOR 1 VENCEU! - - - - -");
        }else if(strcmp(player2,"papel") == 0) {
            printf("\n- - - - - EMPATE! - - - - - ");
        }else if(strcmp(player2, "tesoura") == 0) {
            printf("\n- - - - - JOGADOR 2 VENCEU! - - - - - ");
        }else{
            printf("- - - - - O JOGADOR 2 REALIZOU UMA JOGADA INVALIDA - - - - - ");
        }


    }else if (strcmp(player,"tesoura") == 0) {
        if(strcmp(player2,"pedra") == 0){
            printf("\n- - - - - JOGADOR 2 VENCEU! - - - - -");
        }else if(strcmp(player2,"papel") == 0) {
            printf("\n- - - - - JOGADOR 1 VENCEU! - - - - - ");
        }else if(strcmp(player2, "tesoura") == 0) {
            printf("\n- - - - - EMPATE! - - - - - ");
        }else{
            printf("- - - - - O JOGADOR 2 REALIZOU UMA JOGADA INVALIDA - - - - - ");
       }
    }else{
        printf("- - - - - O JOGADOR 1 REALIZOU UMA JOGADA INVALIDA - - - - -");
       }
          return 0;
    }



