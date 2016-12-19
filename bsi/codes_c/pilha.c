#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

PILHA *pilha = (PILHA*)malloc(sizeof(PILHA));

/*MÉTODOS*/
    create(pilha);
    IsEmpty(pilha);
    SizePilha(pilha);
    Insere(pilha, 5);
    SizePilha(pilha);
    Insere(pilha, 3);
    SizePilha(pilha);
    Insere(pilha, 2);
    SizePilha(pilha);
    imprime(pilha);
    Insere(pilha, 7);
    imprime(pilha);

	return 0;
}
