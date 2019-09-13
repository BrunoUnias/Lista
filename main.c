#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct ListaE{
	int numero;
	struct Lista *prox;
	
}node;

node *criar(){
	node *novo,*aux;
	novo = (node *)malloc(sizeof(node));
	if(novo == NULL) exit(0);
	
	novo->prox = NULL;
	aux = novo;
	
	return aux;
}

node *insereNoInicio(node *raiz,int numero){
	node *novo,*aux;
	aux = raiz;
	novo = (node *)malloc(sizeof(node));
	if(novo == NULL) exit(0);
	novo->numero = numero;
	novo->prox = aux->prox;
	aux->prox = novo;
	
	return aux;
	
}

void insereNoFim(node *raiz,int numero){
	node *novo;
	novo = (node *)malloc(sizeof(node));
	if(novo == NULL) exit(0);
	novo->numero = numero;
	novo->prox = NULL;
	if(raiz == NULL){
		raiz = novo;
		
	}else{
		node *aux = raiz;
		while(aux->prox == NULL){
			aux = aux->prox;
			
		}
		aux = aux->prox;
		raiz = aux;
		
	}
}

void removerNoInicio(node *raiz){
    node *aux;
    if(raiz == NULL)
        printf("\nA lista ja esta vazia");
    else{
        aux = raiz->prox;
        raiz->prox = aux->prox;
        free(aux);
    }
}

void removerNoFim(node *raiz){
    if(raiz == NULL)
        printf("\nA lista ja esta vazia");
    else{
        node *auxFrente, *auxTras=NULL;
        auxFrente = raiz;
        while(auxFrente->prox != NULL){
            auxTras = auxFrente;
            auxFrente = auxFrente->prox;
        }

        if(auxTras != NULL)
            auxTras->prox = NULL;

        free(auxFrente);
    }
}

void imprime(node *ler){
	node *p;
	if(p == NULL) printf("lista vazia");
	for(p = ler->prox;p != NULL;p = p->prox){
		printf("%d\n", p->numero);
	}
	
}

int main(int argc, char *argv[]) {
	int x,k,i;
	node *p_l = criar();
	
	for(i = 0; i<=10;i++){
		system("cls");
		printf("1-inseriNoInicio\n2-imprime\n3-inseriNoFim\n4-removerNoInicio\n5-removerNoFim.");
		printf("\nO que deseja fazer:");
		scanf("%d",&x);
		switch(x){
			case 1:
				printf("insera o valor:");
				scanf("%d",&k);
				insereNoInicio(p_l,k);
				break;
			case 2:
				imprime(p_l);
				break;
			case 3:
				printf("insera o valor:");
				scanf("%d",&k);
				insereNoFim(p_l,k);
				break;
		}
	
	}
	
	return 0;
}
