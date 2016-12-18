#include <stdio.h>
#include <stdlib.h>

typedef int ITEM;
typedef struct pilha_dinamica PILHA_DINAMICA;
//Definição da estrutura da pilha
typedef struct NODE{
	ITEM *item;
	struct NODE *anterior;
} NODE;

typedef struct pilha_dinamica{
	NODE *topo;
	int tamanho;
};

