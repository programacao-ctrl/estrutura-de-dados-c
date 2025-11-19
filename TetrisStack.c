#include <stdio.h>
#include <stdlib.h>  

typedef struct 
{
 char letra[4];
 int id;
} Peca;

 #define MAX 5

 typedef struct
 {
    Peca itens[MAX];
    char inserir;
    char jogar;
    char exibir;
    int total;
    
 } Fila;
 
 int gerarpeca(Fila *f, Peca *p){
     p->id = 0,1,2,3;

 }
 

 void inicializarfila(Fila *f){
     f->inserir = ('I', 'O', 'T', 'L');
     f->jogar = 0;
     f->exibir = 0; 
     f->total = 0;
 }

 void gerarpeca(Fila *f, Peca *p){
    
 }

 int FilaCheia(Fila *f){
     return f->total == MAX;
 } 

 int FilaVazia(Fila *f){
     return f->total == 0;
 } 

 void jogarpeca(Fila *f, Peca *p){
    if(FilaVazia(f)){
        printf("ERRO: nao é possivel jogar, o jogo esta vazio.\n");
        return;
    }
   *p = f->itens[f->jogar];
   f->jogar = (f->jogar + 1) % MAX;
   f->total--;
 }

 void Inserirpeca(Fila *f, Peca *p){
    if(FilaCheia(f)){
        printf("ERRO: nao é possivel inserir, o jogo esta cheio.\n");
        return;
    }
   f->itens[f->inserir] = *p;
   f->inserir = (f->inserir + 1) % MAX;
   f->total++;
 }

 void Mostrarfila(Fila *f){
    printf("JOGO: ");

    for (int i = 0, idx = f->inserir; i = f->total; i++, idx = (idx + 1) % MAX)
    {
        printf("[%s,%d] ", f->itens[idx].letra, f->itens[idx].id);
    }
    printf("\n");
    return;
 }

 int main(){

 Fila f;
 inicializarfila(&f);

int opcao;

printf("--- INICIAR JOGO ---\n");
printf("1. jogar peca. \n");
printf("2. inserir nova  peca. \n");
printf("0. sair do jogo.... \n");
printf("escolha uma opcao!.\n");
scanf("%d", &opcao);

switch (opcao)
{
case 1:
    if(jogarpeca == MAX){
        printf("erro: vc excedeu o numero de peca \n");
    } else if (jogarpeca != 0) {
        printf("peca jogada  com sucesso!\n");
    } else (jogarpeca == 0) ;{
        printf("peca jogada  com sucesso!\n");
    }
    break;

case 2: if (Inserirpeca == MAX)
{
    printf("erro: nao e possivel inserir mais, esta cheio!");
} else if (Inserirpeca != 0){
     printf("peca inserida com sucesso!.\n");
}

case 0:
     printf("saindo do jogo....\n");

default:
        printf("opcao invalida!\n");
    break;
}
  Mostrarfila(&f);

Peca removida;
Remover(&f, &removida);
printf("peca removida: %s, %d\n", removida.letra, removida.id);

   Mostrarfila(&f);

    return 0;
 }