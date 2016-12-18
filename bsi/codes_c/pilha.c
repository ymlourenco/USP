#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

PILHA *pilha = (PILHA*)malloc(sizeof(PILHA));

/*MÉTODOS*/
    create(pilha);
    IsEmpty(pilha);
    SizePilha(pilha);


	return 0;
}
