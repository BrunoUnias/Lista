#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 100

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct queue{
	int itens[TAMANHO];
	int front,rear;
	
}queue;

int vazia(queue *pq){
	printf(1);
	if(pq->front == pq->rear){
		printf("Fila vazia");
		return 1;
		
	}
	return 0;
	
}

int insere(queue *pq,int x){
	if(pq->rear + 1 >= TAMANHO){
		printf("Estouro na capacidade da fila");
		
	}
	else{
		pq->itens[pq->rear++] = x;
		
	}
	return 0;
	
}

int fila_remove(queue *pq){
	int v;
	if(vazia(pq)){
		vazia(pq);
		
	}
	v = pq->itens[pq->front];
	pq->front = pq->rear;
	return v;
	
}

int size(queue *pq){
	return pq->front - pq->rear + 1;
	
}

int front(queue *pq){
	return pq->front;
	
}


int main() {
	int opcao,i,x;
	queue *pq;
	for(i = 0; i<= 10;i++){
			printf("1-vazia\n2-insere\n3-remove\n4-size\n5-front");
		scanf("%d",&opcao);
		system("cls");
		switch(opcao){
			case 1:
				vazia(pq);
				break;
			case 2:
				insere(pq,x);
				break;
		}
	}
	
	return 0;
}
