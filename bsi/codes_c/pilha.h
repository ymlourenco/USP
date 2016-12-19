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
int push(PILHA *p, ITEM valor){
    NODE *NewNode = (NODE*)malloc(sizeof(NODE));

    NewNode->item = valor;
    NewNode->anterior = p->topo;
    p->topo = NewNode;
    p->tamanho++;
    printf(">INSERIDO: %d na pilha\n", valor);
}

//Imprime a pilha de maneira inversa, ou seja,
//o elemento impresso obedece a LIFO(Last in First Out)
int imprime(PILHA *p){

    int i =0;
    int *vet[p->tamanho-1];     //É criado um vetor com p->tamanho-1 elementos

    NODE *paux = p->topo;
    vet[p->tamanho-1] = paux->item;
    for(i = (p->tamanho-1)-1;i>=0;i--){
         paux = paux->anterior;
         vet[i] = paux->item;}

    for(i=0;i<p->tamanho;i++){
        printf("%d\n", vet[i]);}
}

//remove o primeiro elemento da pilha
//ou seja, o topo e promove um novo topo
void pop(PILHA *p){

    if(p!=NULL){
        NODE *paux = p->topo;
        p->topo = p->topo->anterior;
        ITEM atual = paux->item;
        free(paux);
        p->tamanho--;}

    else{
        printf("NAO EXISTEM ELEMENTOS A SEREM REMOVIDOS!");}
}
