#include <stdio.h>
#include <stdlib.h>
#include "quiz.h"
#include "cobra.h"


int main(){
    int escolha;
    
    
    printf("##### Bem Vindo ao Argo Arcades #####\n");
    printf("Escolha uma das opcoes: \n");
    printf("1- Pergunta e Resposta \n2- Cobra na Caixa \n3- Sair \n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        quiz();
        printf("\n Escolha uma das opcoes \n 1- voltar ao menu \n2- Fechar o jogo");
        scanf("%d", &escolha);
        if(escolha == 1){
            main();
        }else{
            break;
        }
    
    case 2:
        cobra();
        printf("\n Escolha uma das opcoes \n1- voltar ao menu \n2- Fechar o jogo");
        scanf("%d", &escolha);
        if(escolha == 1){
            main();
        }else{
            break;
        }

    case 3:
        printf("### Obrigado por Jogar na ARGO Arcades! ###");
        break;
    }

    return 0;
    
}
