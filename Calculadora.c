#include <stdio.h>
#include <stdlib.h>

int sum(int a, int b){

    return a + b;
}

int sub(int a, int b){

    return a - b;
}

float division(int a, int b){

    return (float) a / b;
}

int multi(int a, int b){

    return a * b;
}

int main(){

    int a, b, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro inteiro: ");
    scanf("%d", &a);

    printf("Digite o segundo inteiro (Necessita ser diferente de 0): ");
    scanf("%d", &b);

    while(b == 0){       
        printf("Valor inválido!\nDigite novamente: ");
        scanf("%d", &b);
    }

    soma = sum(a, b);
    subtracao = sub(a, b);
    divisao = division(a, b);
    multiplicacao = multi(a, b);

    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Divisão: %.2f\n", divisao);
    printf("Multiplicação: %d\n", multiplicacao);

    return 0;
}