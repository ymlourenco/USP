#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

PILHA *pilha = (PILHA*)malloc(sizeof(PILHA));

/*M�TODOS*/
    create(pilha);
    IsEmpty(pilha);
    verifica_topo(pilha);
    SizePilha(pilha);

    printf("\n\n--------------Brincando com os elementos----------\n\n");

    //Adicioa o numero 5
    push(pilha, 5);
    SizePilha(pilha);
    IsEmpty(pilha);
    verifica_topo(pilha);
    printf("\n\n");

    //Adiciona o numero 3
    push(pilha, 3);
    SizePilha(pilha);
    IsEmpty(pilha);
    verifica_topo(pilha);
    printf("\n\n");

    //Adiciona o numero 2
    push(pilha, 2);
    SizePilha(pilha);
    IsEmpty(pilha);
    printf("\n\n");

    //Imprime a pilha com os atuais elementos
    imprime(pilha);
    printf("\n\n");

    //Adiciona o n�mero 7
    push(pilha, 7);
    SizePilha(pilha);
    IsEmpty(pilha);
    printf("\n\n");
    imprime(pilha); //Faz a impress�o da pilha obedecendo a LIFO

    //Faz a remo��o do n�mero 7
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remo��o do n�mero 2
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remo��o do n�mero 3
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remo��o do n�mero 5
    pop(pilha);
    SizePilha(pilha);
    verifica_topo(pilha);

    //Destroi a pilha

	return 0;
}
