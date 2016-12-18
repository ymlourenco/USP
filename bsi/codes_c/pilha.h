#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int ITEM;

//Definição da estrutura da pilha
typedef struct NODE{
	ITEM *item;
	struct NODE *anterior;
} NODE;

typedef struct pilha{
	NODE *topo;
	int tamanho;
}PILHA;

//Cria a pilha e testa se ela alocou corretamente
void create(PILHA *p){
   if(p != NULL){
        p->topo = NULL;
        p->tamanho = 0;
        printf(">PILHA CRIADA\n");}
    else
        printf("ERRO AO CRIAR A PILHA!\n");
}

//Verifica se a pilha esta vazia
bool IsEmpty(PILHA *p){
    if(p!=NULL)
    printf(">PILHA NAO ESTA VAZIA!\n");
}

//Mostra o tamanho atual da pilha
int SizePilha(PILHA *p){
    return printf(">PILHA CONTEM: %d elementos\n", p->tamanho);
}

//Faz a inserção de um valor na pilha
int Insere(PILHA *p, ITEM valor){
    NODE *NewNode = (NODE*)malloc(sizeof(NODE));

    NewNode->item = valor;
    NewNode->anterior = p->topo;
    p->topo = NewNode;
    p->tamanho++;
    printf(">INSERIDO: %d na pilha\n", valor);
}
