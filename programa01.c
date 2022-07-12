#include <stdio.h>
#include <stdlib.h>

/*Escreva um programa que aloque dinamicamente mem�ria
para armazenar 1 (um) n�mero real e atribua o endere�o
alocado a um ponteiro pt. Leia um valor real e armazene-o
no endere�o alocado. Em seguida imprima o endere�o
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
