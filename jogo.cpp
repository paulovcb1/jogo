#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

struct Calcular{ 
	int dificuldade; 
	int valor1; 
	int valor2; 
	int operacao; 
	int resultado; 
};

void randOperacao(){
	int operacao;
	
	srand(time(NULL));
	operacao = rand() % 3;
	
	if(operacao == 0){
		printf("soma");
	}
	if(operacao == 1){
		printf("subtracao");
	}
	if(operacao == 2){
		printf("multiplicacao");
	}
}
int main(){
	
	randOperacao();
}
