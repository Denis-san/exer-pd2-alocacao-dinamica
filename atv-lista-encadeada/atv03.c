#include <stdio.h>
#include <stdlib.h>

/*Escreva uma função que busca e remove um elemento de uma lista encadeada.*/

typedef struct cel{
	int valor;
	struct cel *proximo;
}Celula;

void buscarRemoverItem(Celula** lista, int valorAremover);

int main(){


	return 0;
}

void buscarRemoverItem(Celula** lista, int valorAremover){
  Celula *aux = *lista, *anterior;
	
	if (aux != NULL && aux->valor == valorAremover) {
		*lista = aux->proximo;
		free(aux);
		return;
	}
  
	while (aux != NULL && aux->valor != valorAremover) {
		anterior = aux;
		aux = aux->proximo;
	}

	if(aux != NULL) {
		anterior->proximo = aux->proximo;
		free(aux);
	} 

}

