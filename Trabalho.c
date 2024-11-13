#include <stdio.h>
#include <stdlib.h>

diminuir( valor1, valor2){
int result, resposta;
        printf("Subtração\n");
            printf("Digite o resultado da operação: %d - %d = \n",valor1, valor2);
            scanf("%d", &resposta);
            result = valor1 - valor2;
        if (result == resposta)
        {
            printf("Respota correta.\n");
            printf("+10 Pontos\n");
        }else{
            printf("Respota incorreta.\n");
        }
}
somar( valor1, valor2){ 
int resposta, resultado; 
        printf("Adição\n"); 
            printf("Digite o resultado da operação: %d + %d = \n", valor1, valor2); 
            // Resposta do usuário 
            scanf("%d", &resposta); 
            // Resultado 
            resultado = valor1 + valor2; 
            // Validação do resultado 
            if (resultado == resposta)
            { 
                printf("Resposta correta\n");
                printf("+10 Pontos\n");
                } else { 
                printf("Resposta incorreta\n"); 
                } 
}
multiplicar( valor1,  valor2){
int resposta, resultado; 
        printf("Multiplicação\n"); 
            printf("Digite o resultado da operação: %d * %d = \n", valor1, valor2); 
            // Resposta do usuário 
            scanf("%d", &resposta); 
            // Resultado 
            resultado = valor1 * valor2; 
            // Validação do resultado 
            if (resultado == resposta)
            { 
                printf("Resposta correta\n");
                printf("+10 Pontos\n");
                } else { 
                printf("Resposta incorreta\n"); 
                } 
}
dividir( valor1, valor2){
float resultado, resposta;
        printf("Divisão\n"); 
            printf("Digite o resultado da operação: %d / %d = \n", valor1, valor2); 
            // Resposta do usuário 
            scanf("%f", &resposta); 
            // Resultado 
            resultado = valor1 / valor2; 
            // Validação do resultado 
            if (resultado == resposta)
            { 
                printf("Resposta correta\n");
                printf("+10 Pontos\n");
                } else { 
                printf("Resposta incorreta\n"); 
                } 
}
int main(){
    dividir(10,5);
    multiplicar(2,1);
    somar(1,1);
    diminuir(2,1);
}