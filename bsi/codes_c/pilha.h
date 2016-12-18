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

void create(PILHA *p){
   if(p != NULL){
        p->topo = NULL;
        p->tamanho = 0;
        printf(">PILHA CRIADA\n");}
    else
        printf("ERRO AO CRIAR A PILHA!\n");
}

bool IsEmpty(PILHA *p){
    if(p!=NULL)
    printf(">PILHA NAO ESTA VAZIA!\n");
}

int SizePilha(PILHA *p){
    return printf(">PILHA CONTEM: %d elementos", p->tamanho);
}
