#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que aloque dinamicamente memória
para armazenar 1 (um) número real e atribua o endereço
alocado a um ponteiro pt. Leia um valor real e armazene-o
no endereço alocado. Em seguida imprima o endereço
alocado (%p) e o valor lido.*/

int main(){
	
	float *pt;
	
	pt = (float *) malloc(sizeof(float));
	
	if(pt == NULL){
		printf("ERRO! Nao foi possivel allocar memoria");
	}else{
		printf("Insira o numero: ");
		scanf("%f", pt);
		
		printf("Endereco alocado: %p\n", pt);
		printf("Valor lido: %f", *pt);
	}
	
	free(pt); pt = NULL;
	return 0;
}
