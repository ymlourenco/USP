#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(){

PILHA *pilha = (PILHA*)malloc(sizeof(PILHA));

/*MÉTODOS*/
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

    //Adiciona o número 7
    push(pilha, 7);
    SizePilha(pilha);
    IsEmpty(pilha);
    printf("\n\n");
    imprime(pilha); //Faz a impressão da pilha obedecendo a LIFO

    //Faz a remoção do número 7
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remoção do número 2
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remoção do número 3
    pop(pilha);
    SizePilha(pilha);
    imprime(pilha);

    //Faz a remoção do número 5
    pop(pilha);
    SizePilha(pilha);
    verifica_topo(pilha);

    //Destroi a pilha

	return 0;
}
