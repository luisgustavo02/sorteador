#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtdnomes;
	int i;
	int num_aleat;
	
	printf("Digite a quantidade de nomes a serem sorteados:\n");
	scanf(" %i", &qtdnomes);
	fflush(stdin);
	
	char nome[qtdnomes][15];
	
	for(i=1;i<=qtdnomes;i++){
		printf("Digite o %iº nome:\n", i);
		scanf(" %s", &nome[i]);
	}
	
	num_aleat = rand() % qtdnomes;
	
	printf("O nome escolhido foi: %s", nome[num_aleat]);
	
	return 0;
}
