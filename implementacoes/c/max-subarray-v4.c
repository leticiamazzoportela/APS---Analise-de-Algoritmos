// quarta implementação do algoritmo do subvetor maximo
// programação dinamica... acho eu..

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main( int argc, char *argv[ ] ){
	if (argc != 2){
		printf("Uso: ./algoritmo tam_vet\n");
		return 0;
	}
	int n = atoi(argv[1]); // tamanho do vetor

	int soma_inicio = 0, inicio = 0, fim = 0, soma, maxSoma, vet[n];
	srand (1); // seed para gerar numeros iguais

	// iniciar vetor com numeros pseudoaleatorios
	for (int i = 0; i < n; i++)
	{
		vet[i] = rand()%200 - 100;
	}

	// inicia as somas
	soma = vet[0];
	maxSoma = vet[0];

	// encontrar o subvetor maximo
	for(int i = 1; i < n; i++){ // inicia em 1 pois as somas já iniciam com a posição 0
		soma += vet[i];
		if(vet[i] > soma){ // testa se o vet[i] é maior que a soma.. se for.. a soma não é a maior soma.. 
			soma = vet[i]; // a maior soma então começa neste valor maior
			soma_inicio = i;
		}
		if(soma > maxSoma){ // testa se a soma é a maior soma
			maxSoma = soma;
			inicio = soma_inicio; // o inicio do subvetor é o inicio da maior soma
			fim = i; // o fim é a ultima posição.. no caso.. a posição atual
		}
	}

	// imprimir resultados
	for (int i = 0; i < n; i++){
		printf("vet[%d]: %d\n", i, vet[i]);
	}
	printf("Soma maxima: %d \ninicio: %d \nfim: %d", maxSoma, inicio, fim);

	return 0;	
}