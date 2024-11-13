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
	void Soma( int *valor1, int *valor2);
	void Subtracao(int *valor1, int *valor2);
	void Divisao ( int *valor1, int *valor2);
	void Multiplicacao( int *valor1, int *valor2);
	
	void Jogar(int *valor1, int *valor2, int *opercao);
	
void Facil(int *operacao, int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade FACIL!\n");
	
	srand(time(NULL));
	(*valor1) = rand() %10;
	(*valor2) = rand() %10;
	randOperacao( operacao, valor1, valor2);
	system("pause");
	system("cls");
}
void Medio(int *operacao, int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade MEDIO!\n");
	
	srand(time(NULL));
	(*valor1) = rand() %100;
	(*valor2) = rand() %100;
	randOperacao( operacao, valor1, valor2);
	system("pause");
	system("cls");

}
void Dificil( int *operacao, int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade DIFICIL!\n");
	
	srand(time(NULL));
	(*valor1) = rand() %1000;
	(*valor2) = rand() %1000;
	randOperacao( operacao, valor1, valor2);
	system("pause");
	system("cls");

}
void Insano(int *operacao, int *valor1, int *valor2){
	int i;
	printf("Voce esta na dificuldade SUPER DIFICIL!\n");
	
	srand(time(NULL));
	(*valor1) = rand() %10000;
	(*valor2) = rand() %10000;
	randOperacao( operacao, valor1, valor2);
	system("pause");
	system("cls");
	
}

void randOperacao(int *operacao, int *valor1, int *valor2){
	
	srand(time(NULL));
	*operacao = rand() % 4;
	
	if(*operacao == 0){
		Soma (valor1, valor2);
	}
	if(*operacao == 1){
		Subtracao (valor1, valor2);
	}
	if(*operacao == 2){
		Multiplicacao (valor1, valor2);
	}
	if(*operacao == 3){
		Divisao (valor1, valor2);
	}
}

void Subtracao(int *valor1, int *valor2){
	int result, resposta, i;
    	printf("Subtracao\n");
    	printf("Digite o resultado da operacao: %d - %d = \n", *valor1, *valor2);
    	scanf(" %d", &resposta);
        result = *valor1 - *valor2;
        if (result == resposta)
        {
            printf("Respota correta.\n");
            printf("+10 Pontos\n");
            *pontuacao 
        }else{
            printf("Respota incorreta.\n");
        }
}

void Soma( int *valor1, int *valor2){ 
	int resposta, resultado; 
        printf("Adicao\n"); 
            printf("Digite o resultado da operacao: %d + %d = \n", *valor1, *valor2); 
            // Resposta do usuário 
            scanf("%d", &resposta); 
            // Resultado 
            resultado = *valor1 + *valor2; 
            // Validação do resultado 
            if (resultado == resposta)
            { 
            printf("Resposta correta\n");
            printf("+10 Pontos\n");
            } else { 
            printf("Resposta incorreta\n"); 
            } 
}
void Multiplicacao( int *valor1, int *valor2){
int resposta, resultado; 
        printf("Multiplicacao\n"); 
            printf("Digite o resultado da operacao: %d * %d = \n", *valor1, *valor2); 
            // Resposta do usuário 
            scanf("%d", &resposta); 
            // Resultado 
            resultado = (*valor1) * (*valor2); 
            // Validação do resultado 
            if (resultado == resposta)
            { 
            printf("Resposta correta\n");
            printf("+10 Pontos\n");
            } else { 
            printf("Resposta incorreta\n"); 
            } 
}
void Divisao ( int *valor1, int *valor2){
float resultado, resposta;
        printf("Divisao\n"); 
            printf("Digite o resultado da operacao: %d / %d = \n", *valor1, *valor2); 
            // Resposta do usuário 
            scanf("%f", &resposta); 
            // Resultado 
            resultado = *valor1 / *valor2; 
            // Validação do resultado 
            if (resultado == resposta)
            { 
            printf("Resposta correta\n");
            printf("+10 Pontos\n");
            } else { 
            printf("Resposta incorreta\n"); 
            } 
}
void Jogar(int *valor1, int *valor2, int *operacao, int *pontuacao){
	int contagem = 1, cont = 1;
	int dificuldade;
	
	while(contagem){
		
		printf("Escolha a dificudade que deseja jogar.\n1- Facil\n2- Medio\n3- Dificil\n4- Insano\n");
		scanf("%d", &dificuldade);
		switch(dificuldade){
		case 1:
			Facil(operacao, valor1, valor2);		
		break;
		case 2:
			Medio(operacao, valor1, valor2);
		break;
		case 3:
			Dificil(operacao, valor1, valor2);		
		break;
		case 4:
			Insano(operacao, valor1, valor2);		
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
	int pontuacao;
	Jogar(&valor1, &valor2, &operacao, &pontuacao);
}
