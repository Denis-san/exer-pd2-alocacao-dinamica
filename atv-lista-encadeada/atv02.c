#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que receba como parâmetro uma lista encadeada e retorne a soma dos
elementos da lista.*/

typedef struct cel{
	int valor;
	struct cel *proximo;
}Celula;


int somarElementos(Celula *lista);

int main(){

	return 0;
}

int somarElementos(Celula *lista){
	int result = 0;
	
	while(lista != NULL){
		result = result + lista->valor;
		lista = lista->proximo;
	}
	
	return result;
}
