#include <stdio.h>
#include <stdlib.h>
#include <string.h>





#define TAM_MAX 10

#define MAX_STR_LEN 30



typedef struct no {
    char nome[MAX_STR_LEN];
    char tipo[20];
    int quantidade[TAM_MAX];

}itemestatico;




void inicializarlistaitemestatica(itemestatico *lista);
void inseriritemestatico(itemestatico *lista, const char* texto);
void removeritemestatico(itemestatico *lista, const char* texto);
void listaritemestatico(const itemestatico *lista);




typedef struct no {
    char* nome;
    struct no *proximo;

}no;


typedef no* listaencadeada;



void inicializarlistaitemencadeada(listaencadeada *lista);

void inseriritemencadeada(listaencadeada *lista, const char* texto);
void removeritemencadeada(listaencadeada *lista, const char* texto);
void listaritemencadeada( const listaencadeada lista);
void liberaritemencadeada(listaencadeada *lista);






void menulistaitemestatica();
void menulistaitemencadeada();





int main(){

  int opcao; malloc(sizeof(opcao));


  do
  {
     printf("\n--- itens da mochila (TEXTO) ---\n");
    printf(" 1. lista estatica de itens\n");
    printf("2. lista encadeada de itens\n");
    printf("0. sair do programa \n");
    printf("escolha uma opção: \n");
    scanf("%d", &opcao);
   
    switch (opcao)
    {
    case 1:
      menulistaitemestatica();
      break;

    case 2:
      menulistaitemencadeada();
      break;

    case 0:
      printf("saindo do programa....\n");
      break;

    default:
      printf("opcao invalida.\n");
      break;
    }
  }while (opcao != 0);
   
   return 0;
}

void inicializarlistaitemestatica(itemestatico *lista) {    
   *lista->quantidade = 0;
 }

void inseriritemestatico(itemestatico *lista, const char* texto) {

  if (lista ->quantidade == TAM_MAX)
  {
    printf("erro: não é possivel colocar mais mais nada, a lista esta cheia!.\n");
    return;
  }
  strcpy(lista->nome [*lista ->quantidade], texto);

  lista ->quantidade++;

   printF("item \"%s\" inserido com sucesso!.\n");

}
 
void removeritemestatico(itemestatico *lista, const char* texto){

  int i, pos = -1;

  for ( i = 0; i < lista ->quantidade; i++)
  {  if (strcmp(lista ->nome[i], texto) == 0)
  {
    pos = i;
    break;
  }
}
  if (pos == -1) {
    printf("erro: item \"%s\" nao encontrado na lista.\n", texto);
    return;
  }
    
  for ( i = 0; i < lista ->quantidade -1; i++)
  {
    strcpy(lista->nome[i], lista->nome[i + 1]);
  
  lista ->quantidade--;
  printf("item\"%s\" removido com sucesso.\n");
  }

}

void listaritemestatico(const itemestatico *lista){
  if (lista->quantidade == 0)
  {
    printf("a lista da mochila está vazia.\n");
    return;
  }
  printf("---- itens da mochila ----\n [");
 
  for (int i = 0; i < lista->quantidade; i++)
  {
    printf("\"%s\" ", lista->nome[i]);
  }
  printf("]\n");

}

void inicializarlistaitemencadeada(listaencadeada *lista){
  *lista = NULL;
}

void inseriritemencadeada(listaencadeada *lista, const char* texto){

  no* novoNo =(no*) malloc(sizeof(no));
  
  if (novoNo == NULL)
  {
    printf("erro: falha ao alocacao de memoria para o no .\n");
    return;
  }

  novoNo->nome =(char*) malloc(strlen(texto) + 1);

 if (novoNo->nome == NULL)
 {
  printf("erro: falha na alocacao da memoria para o texto.\n");
    free(novoNo);
    return;
 }
 

strcpy(novoNo->nome, texto);



novoNo->proximo = *lista;


*lista = novoNo;

 printf("texto \"%s""inserido com sucesso.\n",texto);

}
void removeritemencadeada(listaencadeada *lista, const char* texto){


no *atual = *lista;
no *anterior = NULL;


while (atual != NULL && strcmp(atual->nome, texto) != 0)
{
  anterior = atual;
  atual = atual->proximo;
}

if (atual == NULL){
  printf("erro: item \"%s""nao encontrado na lista.\n", texto);
  return;
}

if (anterior == NULL) {
  *lista = atual ->proximo;
} else{
  anterior ->proximo = atual ->proximo;
} 
free(atual ->nome);

free(atual);
 
printf("item \"%s" "removido com sucesso. \n", texto);
}

void listaritemencadeada( const listaencadeada lista){
  no *temp = lista;
  if(temp == NULL){

    printf("lista encadeada esta vazia.\n");
    return;
  }
  printf("itens da mochila : [");

  while (temp != NULL)
  {
    print("\"%s\" ", temp->nome);
    temp = temp->proximo;  
  }
  printf("]\n");
}

void liberaritemencadeada(listaencadeada *lista){
  no *atual = *lista;
  no *proximo;

  while (atual != NULL)
  {
    proximo = atual->proximo;
    free(atual->nome);
    free(atual);
  }
  

}

  free(opcao);
     


