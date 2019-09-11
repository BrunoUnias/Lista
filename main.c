#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct node{
	int numero;
	struct node *prox;
	
}No;

No *cria_lista(){
	No *novo,*aux;
	novo = (No*) malloc(sizeof(No));
	if(novo == NULL) exit(0);
	
	novo->prox == NULL;
	aux = novo;
	
	return(aux);
}

No * inserirNoInicio(No * raiz, int numero){
    No * novo, *aux;
    aux = raiz;
    novo = (No *) malloc(sizeof(No));
    if(novo == NULL) exit(0);     
    novo->numero = numero;
    novo->prox = aux->prox;
    aux->prox = novo;
    return(aux);
}

void inserirNoFim(No **raiz, int numero){
    No *novo;
    novo = (No *) malloc(sizeof(No));
    if(novo == NULL) exit(0);
    novo->numero = numero;
    novo->prox = NULL;
    
    if(*raiz == NULL){
        *raiz = novo;
    }else{
        No *aux;
        aux = *raiz;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = novo;
        *raiz = aux;
    }
}

void removerNoInicio(No *raiz){
    No *aux;
    if(raiz == NULL)
        printf("\nA lista ja esta vazia");
    else{
        aux = raiz->prox;
        raiz->prox = aux->prox;
        free(aux);
    }
}

void removerNoFim(struct No **raiz){
    if(*raiz == NULL)
        printf("\nA lista ja esta vazia");
    else{
        No *auxFrente, *auxTras=NULL;
        auxFrente = *raiz;
        while(auxFrente->prox != NULL){
            auxTras = auxFrente;
            auxFrente = auxFrente->prox;
        }

        if(auxTras != NULL)
            auxTras->prox = NULL;

        free(auxFrente);
    }
}

int main(int argc, char *argv[]) {
	No *raiz;
	
	raiz = cria_lista();
	return 0;
}

int opt(No *raiz,int numero){
	No *p;
	switch(numero){
		
	}	
}
