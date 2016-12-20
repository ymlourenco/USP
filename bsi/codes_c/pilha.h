#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ITEM;

//Definição da estrutura do bloco da pilha para ser dinâmicamente alocada
typedef struct NODE{
	ITEM *item;
	struct NODE *anterior;
} NODE;

//Definição da estrutura da pilha
typedef struct pilha{
	NODE *topo;
	int tamanho;
}PILHA;

//Cria a pilha e testa se ela alocou corretamente
void create(PILHA *p){
   if(p != NULL){       //Se p == NULL, houve problema ao alocar a memória
        p->topo = NULL;
        p->tamanho = 0;
        printf(">PILHA CRIADA\n");}
    else
        printf("ERRO AO CRIAR A PILHA!\n");
}

//Verifica se a pilha esta vazia
bool IsEmpty(PILHA *p){
    if(p->topo!=NULL)
        printf(">PILHA NAO ESTA VAZIA!\n");
    else
        printf(">PILHA ESTA VAZIA!\n");

}

bool verifica_topo(PILHA *p){
    if(p->topo == NULL)
        printf(">TOPO SEM ELEMENTOS!\n");
}

//Mostra o tamanho atual da pilha
int SizePilha(PILHA *p){
    return printf(">TAMANHO: %d elementos\n", p->tamanho);
}

//Faz a inserção de um valor na pilha
int push(PILHA *p, ITEM valor){
    NODE *NewNode = (NODE*)malloc(sizeof(NODE));

    NewNode->item = valor;
    NewNode->anterior = p->topo;
    p->topo = NewNode;
    p->tamanho++;
    printf(">INSERIDO: %d na pilha\n", valor);
}



//Remove o primeiro elemento da pilha
//ou seja, o topo e promove um novo topo
void pop(PILHA *p){

    if(p!=NULL){
        NODE *paux = p->topo;
        p->topo = p->topo->anterior;
        ITEM atual = paux->item;
        free(paux);
        p->tamanho--;

    }
}

//Imprime a pilha de maneira inversa, ou seja,
//o elemento impresso obedece a LIFO(Last in First Out)
void imprime(PILHA *p){
int i=0;
int contador = p->tamanho-1;
int vet[contador];
//printf("%d", contador);
    printf(">PILHA:\n");
    NODE *paux = p->topo;
    vet[i] = paux->item; //Na teoria armazena o topo da pilha na ultima posição do vetor
    printf("|%d|\n",vet[i]);
    while(i<contador){
        i++;
        paux = paux->anterior;
        vet[i] = paux->item;
        printf("|%d|\n",vet[i]);
}
}





























/*



    int i=0;
    int countn=(p->tamanho-1);
    int *vet[countn];     //É criado um vetor com p->tamanho-1 elementos
    printf("%d", countn);
  /*  printf("Pilha Atual: \n");
    NODE *paux = p->topo;
  //  vet[i] = paux->item;
    while(i!=countn){
   // printf("|%d|\n", vet[i]);
   // while(i!=countn){
        if(p->topo != NULL){
            paux = p->topo;
            vet[i] = paux->item;
            paux = paux->anterior;
            i++;
            vet[i] = paux->anterior;
        }
      //  vet[i] = paux->item;
     //   paux = paux->anterior;
     //   vet[i] = paux->item;
    //    printf("|%d|\n", vet[i]);
      //  i++;}
    for(i=countn;i>0;i--)
                printf("|%d|\n", vet[i]);
//*/

//}
