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
	void Facil(int *valor1, int *valor2);
	void Medio(int *valor1, int *valor2);
	void Dificil(int *valor1, int *valor2);
	void SuperDificil(int *valor1, int *valor2);
	void randOperacao(int *operacao, int *valor1, int *valor2);
	void Subtracao(int *valor1, int *valor2);
	void Jogar(int *valor1, int *valor2, int *opercao);
	
void Facil(int *operacao, int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade FACIL!");
	
	srand(time(NULL));
	(*valor1) = rand() %10;
	(*valor2) = rand() %10;
	randOperacao( operacao, valor1, valor2);
}
void Medio(int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade MEDIO!");
	
	srand(time(NULL));
	(*valor1) = rand() %100;
	(*valor2) = rand() %100;

}
void Dificil(int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade DIFICIL!");
	
	srand(time(NULL));
	(*valor1) = rand() %1000;
	(*valor2) = rand() %1000;

}
void Insano(int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade SUPER DIFICIL!");
	
	srand(time(NULL));
	(*valor1) = rand() %10000;
	(*valor2) = rand() %10000;
	
}

void randOperacao(int *operacao, int *valor1, int *valor2){
	
	srand(time(NULL));
	*operacao = rand() % 3;
	
	if(*operacao == 0){
		printf("soma");
	}
	if(*operacao == 1){
		Subtracao(valor1, valor2);
	}
	if(*operacao == 2){
		printf("multiplicacao");
	}
}

void Subtracao(int *valor1, int *valor2){
	int result, resposta, i;
    	printf("Subtração");
    	printf("Digite o resultado da operação: %d - %d = ", *valor1, *valor2);
    	scanf(" %d", &resposta);
        result = *valor1 - *valor2;
        if (result == resposta)
        {
            printf("Respota correta.");
            printf("+10 Pontos");
        }else{
            printf("Respota incorreta.");
        }
}
void Jogar(int *valor1, int *valor2, int *operacao){
	int contagem = 1, cont = 1;
	int dificuldade;
	
	while(contagem){
		
		printf("Escolha a dificudade que deseja jogar.\n1- Facil\n2- Medio\n3- Dificil\n4- Mega ultra dificil");
		scanf("%d", &dificuldade);
		switch(dificuldade){
		case 1:
			Facil(operacao, valor1, valor2);		
		break;
		case 2:
			Medio(valor1, valor2);
		break;
		case 3:
			Dificil(valor1, valor2);		
		break;
		case 4:
			Insano(valor1, valor2);		
		break;
		case 5:	
			contagem = 0;		
			break;
		}			
	}
	
	}
	

	


int main(){
	int valor1 = 0, valor2 = 0;
	int operacao = 0;
	Jogar(&valor1, &valor2, &operacao);
}
