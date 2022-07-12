#include <stdio.h>
#include <stdlib.h>

float *calcularSomaMedia(int *vetor, int tamanhoVetor);

int main(){
	
	int N;
	int *vet;
	
	printf("Insira a quantidade de elementos: ");
	scanf("%d", &N);
	
	vet = (int *) calloc(N, sizeof(int));
	
	if(vet != NULL){
		
		float *result = calcularSomaMedia(vet, N);
		
		printf("\nSoma: %.0f\n", result[0]);
		printf("Media: %.2f", result[1]);
	}
	
	return 0;
}

float *calcularSomaMedia(int *vetor, int tamanhoVetor){
	
	int i;
	float *result = (float *) calloc(2, sizeof(float));
	float soma = 0;
	float media;
	
	if(result != NULL){
		for(i = 0; i < tamanhoVetor; i++){
			printf("Numero: ");
			scanf("%d", &vetor[i]);
			soma = (float) soma + vetor[i];
		}
	
		media = (float) soma / tamanhoVetor;
	
		result[0] = soma;
		result[1] = media;
	}

	return result;
	
}
