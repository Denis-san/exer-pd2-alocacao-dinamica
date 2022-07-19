#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba como parâmetro uma lista encadeada e retorne a quantidade de
células da lista.*/

typedef struct cel{
	int valor;
	struct cel *proximo;
}Celula;

int quantidadeDeItems(Celula *lista);

int main(){


	return 0;
}

int quantidadeDeItems(Celula *lista){
	int result = 0;
	
	while(lista != NULL){
		result++;
		lista = lista->proximo;
	}
	
	return result;
}
