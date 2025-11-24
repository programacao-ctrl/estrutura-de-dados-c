#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//criação da estrutura 
typedef struct No
{
    char valor[50];
    struct No* esquerda;
    struct No* direita;
} No;


typedef struct comodos 
{
   int lugar;
   int lado;
} comodos;


//criação de novo nó e alocação de memoria 
No* CriarNo(const char* valor){
    No* Novo = (No*) malloc(sizeof(No));

    if (Novo == NULL){
        printf("erro ao alocar memoria!. \n");
        exit(1);
    }


strcpy(Novo->valor, valor);
Novo->esquerda = NULL;
Novo->direita = NULL;

return Novo;
}

void criarsala(comodos* lugar){
     criarsala(lugar); 
     //alocação de memoria
     malloc(sizeof(criarsala));

     lugar = ('cozinha', 'sala de estar', 'quarto');
      
}
   void explorarsala( comodos* lugar, struct No* esquerda,  struct No* direita){
    //alocação de memoria 
    malloc(sizeof(explorarsala));
    
   }
    //liberação da memoria
    void liberar(comodos* lugar){
    if(lugar != NULL)
    liberar(lugar->lado);
    free(criarsala);
    free(explorarsala);
    
}

int main(){

No* comodos = NULL;

//colocar uma lista de onde o jogador quer começar a explorar
int opcao; malloc(siseof(opcao));

printf("----seja bem vindo(a) ao HALL  DE ENTRADA-----\n");
printf("primeiro escolha um lugar para começar a investigar!.\n");
printf("1.COZINHA.\n");
printf("2.SALA DE ESTAR.\n");
printf("3.QUARTO.\n");
printf("4.sair...\n");
printf("escolha uma opcao!\n");
scanf("%d", &opcao);

comodos->direita;
comodos->esquerda;
int mover; malloc(sizeof(mover));

switch (opcao)
{
case 1:
    printf("voce esta na COZINHA!.\n");
    printf("para se mover para a esquerda pressione o numero (1), para se mover para a direita pressione o numero (2).\n");
     if(mover == 1){
        printf("voce esta no COZINHA. e se MOVEU PARA ESQUERDA!.\n", comodos->esquerda);
     } else if(mover == 2){
        printf("voce esta no COZINHA e se MOVEU PARA A DIREITA!.\n", comodos->direita);
     };  
    break;
    return;

    case 2:
    printf("voce esta na SALA DE ESTAR!.\n");
    printf("para se mover para a esquerda pressione o numero (1), para se mover para a direita pressione o numero (2).\n");
     if(mover == 1){
        printf("voce esta na SALA DE ESTAR. e se MOVEU PARA ESQUERDA!.\n", comodos->esquerda);
     } else if(mover == 2){
        printf("voce esta na SALA DE ESTAR e se MOVEU PARA A DIREITA!.\n", comodos->direita);
     };  
    break;
    return;

     case 3:
    printf("voce esta no QUARTO!.\n");
    printf("para se mover para a esquerda pressione o numero (1), para se mover para a direita pressione o numero (2).\n");
     if(mover == 1){
        printf("voce esta no QUARTO. e se MOVEU PARA ESQUERDA!.\n", comodos->esquerda);
     } else if(mover == 2){
        printf("voce esta no QUARTO. e se MOVEU PARA A DIREITA!.\n", comodos->direita);
     };  
    break;
    return;

    case 4:
           printf("SAINDO DO JOGO.....\n");
    break;

default:
     printf("opcao invalida.\n");
    break;
}

free(opcao);
free(mover);

    return 0;
}