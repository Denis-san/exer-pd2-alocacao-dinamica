#include <stdio.h>
#include <stdlib.h>

/*Escreva uma fun��o que receba como par�metro uma lista encadeada e retorne a quantidade de
c�lulas da lista.*/

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
