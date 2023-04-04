#include <stdio.h>
#include <stdlib.h>


int quiz(){
    int pontos = 0;
    char answ;
    int resp = 1;

    while (resp == 1)
    {
        printf("##### Jogo do Quiz!#####\n\nSerao cinco perguntas, cada uma com quatro alternativas. Ao final, sera informada a sua pontuacao.\n\n");
        printf("Pergunta 1: Qual eh o melhor dia da semana?\n a) - Segunda\n b) - Quarta\n c) - Sexta\n d) - Sabado\n");
        scanf(" %c", &answ);


        if(answ == 'a'|| answ == 'A'){
            printf("Resposta errada.\n\n");
        }if(answ == 'b'|| answ == 'B'){
            printf("Resposta errada.\n\n");
        }if(answ == 'c'|| answ == 'C'){
            printf("Resposta certa!\n\n");
                    pontos++;
        }if(answ == 'd'|| answ == 'D'){
            printf("Resposta errada.\n\n");
        }

        printf("Pergunta 2: Se o pato perdeu a pata, o que ele eh?\n a) - Manco\n b) - Aleijado\n c) - Viuvo\n d) - Solteiro\n");
        scanf(" %c", &answ);

        if(answ == 'a'|| answ == 'A'){
            printf("Resposta errada.\n\n");
        }if(answ == 'b'|| answ == 'B'){
            printf("Resposta certa!\n\n");
                    pontos++;
        }if(answ == 'c'|| answ == 'C'){
            printf("Resposta errada.\n\n");
        }if(answ == 'd'|| answ == 'D'){
            printf("Resposta errada.\n\n");
        }

        printf("Pergunta 3: Qual a cor do cavalo Branco de Napoleao?\n a) - Preto\n b) - Marrom\n c) - Cinza\n d) - Branco\n");
        scanf(" %c", &answ);

        if(answ == 'a'|| answ == 'A'){
            printf("Resposta certa!\n\n");
            pontos++;
        }if(answ == 'b'|| answ == 'B'){
            printf("Resposta errada.\n\n");
        }if(answ == 'c'|| answ == 'C'){
            printf("Resposta errada.\n\n");
        }if(answ == 'd'|| answ == 'D'){
            printf("Resposta errada.\n\n");
        }

        printf("Pergunta 4: Por que quando o portugues vai dormir, ele leva para o quarto um copo de agua cheio e outro vazio?\n a) - Ele eh doido\n b) - Ele gosta de copos\n c) - Ele nao sabe se vai ter sede ou nao\n d) - NR\n");
        scanf(" %c", &answ);

        if(answ == 'a'|| answ == 'A'){
            printf("Resposta errada.\n\n");
        }if(answ == 'b'|| answ == 'B'){
            printf("Resposta errada.\n\n");
        }if(answ == 'c'|| answ == 'C'){
            printf("Resposta certa!\n\n");
                    pontos++;
        }if(answ == 'd'|| answ == 'D'){
            printf("Resposta errada.\n\n");
        }

        printf("Pergunta 5: Por que a galinha bateu a cabeca na parede?\n a) - Provavelmente a galinha estava em transe\n b) - A galinha possui dois parafusos a menos\n c) - A galinha estava brigando com a parede\n d) - A galinha queria ficar com um galo\n");
        scanf(" %c", &answ);

        if(answ == 'a'|| answ == 'A'){
            printf("Resposta errada.\n\n");
        }if(answ == 'b'|| answ == 'B'){
            printf("Resposta errada.\n\n");
        }if(answ == 'c'|| answ == 'C'){
            printf("Resposta errada.\n\n");
        }if(answ == 'd'|| answ == 'D'){
            printf("Resposta certa!\n\n");
            pontos++;
        }

        printf("##### Pontuacao final: %d ######", pontos);
        printf("\n\nO que desejar fazer? \n 1 - Jogar novamente\n 2 - Voltar ao menu\n");
        scanf(" %d", &resp);
        if(resp != 1){
            printf("\n redirecionando para o menu principal...");
        }
    }
    
    }
