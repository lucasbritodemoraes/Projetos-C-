#include <stdio.h>

int main (){

int num1, num2;
int soma, subtracao, multiplicacao, divisao;

printf("Digite o primeiro número: \n");
scanf("%d", &num1);
printf("Digite o segundo número: \n");
scanf("%d", &num2);

// Operação soma
soma = num1 + num2;

// Operação subtração
subtracao = num1 - num2;

// Operação multiplicação
multiplicacao = num1 * num2;

// Operação divisão
divisao = num1 / num2;

printf("A soma é: %d\n", soma);
printf("A subtração é: %d\n", subtracao);
printf("A multiplicação é: %d\n", multiplicacao);
printf("A divisão é: %d\n", divisao);


return 0;

}