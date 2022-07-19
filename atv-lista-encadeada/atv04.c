#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que contenha uma função que insere um elemento no final (à direita) de uma
lista encadeada.*/

typedef struct cel{
	int valor;
	struct cel *proximo;
}Celula;

void imprimirLista(Celula* lista);

void inserirNoFinal(Celula **lista, int valor);

int main(){
	char op = 's';
	Celula *lista = NULL;
	int valor;
	
	while(op == 's'){
		printf("Deseja inserir algum valor? (s/n): ");
		fflush(stdin);
		op = getchar();
		fflush(stdin);
		
		if(op == 's'){
			printf("\nValor: ");
			scanf("%d", &valor);
			inserirNoFinal(&lista, valor);
			
			printf("\n");
			
			imprimirLista(lista);
			
			printf("\n");
		}
		
	}
	
	free(lista); lista = NULL;

	return 0;
}


void inserirNoFinal(Celula **lista, int valor){
	Celula *ultimoLista;
	Celula *novoItem = (Celula *) malloc(sizeof(Celula));
		
	if(novoItem != NULL){
		novoItem->valor = valor;
		novoItem->proximo = NULL;
		
		if(*lista == NULL)	{
			*lista = novoItem;
			return;
		}
		
		ultimoLista = *lista;
		
		while(ultimoLista->proximo != NULL){
			ultimoLista = ultimoLista->proximo;
		}
		
		ultimoLista->proximo = novoItem;
		return;
		
	}else{
		printf("Erro ao alocar memoria!");
	}
}

void imprimirLista(Celula* lista) {
	
	if(lista == NULL){
		printf("\nLista vazia!\n");
		return;
	}
	
	while(lista != NULL){
		printf("%d ", lista->valor);
		lista = lista->proximo;
	}
}
