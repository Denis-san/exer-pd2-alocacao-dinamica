#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int matricula;
	char nome[20];
	float valorApolice;
	int idade;
	char estadoCivil;
} Cliente;

//Essa função imprime a média de valores de apólice dos clientes casados, o nome e o estado civil do
//cliente com o maior valor de apólice, e a porcentagem de clientes com menos de 40 anos
void imprimirDados(Cliente *clientes, int tamanhoLista);

int main(){
	
	int qntdCliente = 0;
	int i;
	
	printf("Insira o numero de clientes da empresa: ");
	scanf("%d", &qntdCliente);
	
	Cliente *listaClientes = (Cliente *) calloc(qntdCliente, sizeof(Cliente));
	
	for(i = 0; i < qntdCliente; i++){
		printf("\nCliente #%d\n", (i + 1));
		printf("Insira a matricula do cliente: ");
		scanf("%d", &listaClientes[i].matricula);
		
		printf("Insira o nome do cliente: ");
		scanf("%s", &listaClientes[i].nome);
		
		printf("Insira a idade: ");
		scanf("%d", &listaClientes[i].idade);

		fflush(stdin);
		
		printf("Insira o estado civil: ");
		scanf("%c", &listaClientes[i].estadoCivil);
		
		printf("Insira o valor da apolice: ");
		scanf("%f", &listaClientes[i].valorApolice);
		
	}
	
	imprimirDados(listaClientes, qntdCliente);
	
	return 0;
}

void imprimirDados(Cliente *clientes, int tamanhoLista){
	int i;
	
	int qntdClienteMenorQuarenta = 0;
	int qntClientesCasados = 0;
	float maiorApolice = 0;
	float somaApoliceCasados = 0;	
	float mediaApoliceCasados = 0;
	float porcentagemIdadeMenorQuarenta = 0;
	Cliente clienteMaiorApolice;
	
	for(i = 0; i < tamanhoLista; i++){
		if(clientes[i].estadoCivil == 'C' || clientes[i].estadoCivil == 'c'){
			qntClientesCasados++;
			somaApoliceCasados = somaApoliceCasados + cliente[i].valorApolice;
		}
		
		if(maiorApolice < clientes[i].valorApolice){
			maiorApolice = clientes[i].valorApolice;
			clienteMaiorApolice = clientes[i];
		}
		
		if(clientes[i].idade < 40){
			qntdClienteMenorQuarenta++;
		}
		
	}
	
	mediaApoliceCasados = (float) somaApoliceCasados / qntClientesCasados;
	
	porcentagemIdadeMenorQuarenta = (float) qntdClienteMenorQuarenta * 100 / tamanhoLista;
	
	printf("media de valores de apolice dos clientes casados: %.2f\n", mediaApoliceCasados);
	printf("nome e o estado civil do cliente com o maior valor de apolice: %s, %c\n", clienteMaiorApolice.nome, clienteMaiorApolice.estadoCivil);
	printf("porcentagem de clientes com menos de 40 anos: %.1f\n", porcentagemIdadeMenorQuarenta);
	
}
