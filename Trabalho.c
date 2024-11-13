#include <stdio.h>
#include <stdlib.h>

diminuir(int valor1, int valor2){
int result, resposta, i;
        printf("Subtração\n");
            printf("Digite o resultado da operação: %d - %d = \n",valor1, valor2);
            scanf("%d",resposta);
            result = valor1 - valor2;
        if (result = resposta)
        {
            printf("Respota correta.\n");
            printf("+10 Pontos\n");
        }else{
            printf("Respota incorreta.\n");
        }
}
somar(int valor1,int valor2){ 
int resposta, resultado; 
        printf("Adição\n"); 
            printf("Digite o resultado da operação: %d + %d = \n", valor1, valor2); 
            // Resposta do usuário 
            scanf("%d", resposta); 
            // Resultado 
            resultado = valor1 + valor2; 
            // Validação do resultado 
            if (resultado = resposta)
            { 
                printf("Resposta correta\n");
                printf("+10 Pontos\n");
                } else { 
                printf("Resposta incorreta\n"); 
                } 
}
multiplicar(int valor1, int valor2){
int resposta, resultado; 
        printf("Multiplicação\n"); 
            printf("Digite o resultado da operação: %d * %d = \n", valor1, valor2); 
            // Resposta do usuário 
            scanf("%d", resposta); 
            // Resultado 
            resultado = valor1 * valor2; 
            // Validação do resultado 
            if (resultado = resposta)
            { 
                printf("Resposta correta\n");
                printf("+10 Pontos\n");
                } else { 
                printf("Resposta incorreta\n"); 
                } 
}