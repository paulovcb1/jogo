#include <stdio.h>
#include <stdlib.h>

diminuir(int valor1, int valor2){
int dificuldade, result, resposta, i;
        printf("Subtração");
            printf("Digite o resultado da operação: %d - %d = ",valor1, valor2);
            scanf("%d",resposta);
            result = valor1 - valor2;
        if (result == resposta)
        {
            printf("Respota correta.");
            printf("+10 Pontos");
        }else{
            printf("Respota incorreta.");
        }
}