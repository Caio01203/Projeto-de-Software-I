#include <stdio.h>
#include <stdlib.h>

int cobra(){
    char nome1[15];
    char nome2[15];

    int resp = 1;

    while (resp == 1){
     printf("##### Bem Vindos A Tumba do Farao Neebe ##### \n");
    printf("digite o nome de voces: ");
    scanf("%s %s", nome1, nome2);
    

    printf("Voces acabam de entrar na sala secreta da tumba, e comecam a explorar, veem que contem diversas escrituras na parede, e quando menos esperam, o %s, aperta um botao escondido que fecha todas as portas trancando voces.", nome1);
            printf("\n Neste momento, caem do teto 5 caixas, em 1 delas contem um botao, outra uma cobra mortal e as 3 restantes estao vazias.");
            printf("%s: escolha uma caixa de 1 a 5: ",nome1);
            int botao = rand() % 5 + 1;
            int cobra = rand() % 5 + 1;
            while (cobra == botao)
            {
                rand() % 5 + 1;
            }
            for(int i = 2 ; i < 7 ; i++){
                int decisao;
                if(i % 2 == 0 ){
                    printf("\n%s escolha uma de 1 a 5 que ainda nao tenha sido escolhida: ", nome1);
                    scanf("%d", &decisao);
                }else if(i % 2 != 0){
                    printf("\n%s escolha uma de 1 a 5 que ainda nao tenha sido escolhida: ", nome2);
                    scanf("%d", &decisao);
                }
                if(decisao == botao){
                    printf("### PARABENS, VOCES VENCERAM O JOGO, HAVIA UM BOTAO QUE ABRE TODAS AS BOTAS DENTRO DESTA CAIXA!!! ###");
                    break;
                }
                if(decisao == cobra){
                    printf("### Voces acabaram de liberar uma cobra extremamente perigosa que matou os 2, infelizmente perderam o jogo ###");
                    break;
                }
                if(decisao != cobra && decisao !=botao){
                    printf("A caixa escolhida estava vazia");
                }
            }
        printf("\n\nO que desejar fazer? \n 1 - Jogar novamente\n 2 - Voltar ao menu\n");
        scanf(" %d", &resp);
        if(resp != 1){
            printf("\n redirecionando para o menu principal...");
        }
   
    }

}