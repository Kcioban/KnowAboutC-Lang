#include <stdio.h>

int main() {

    // definindo variaveis
    char n[30];
    int idade;
    char sexo;

    // input dos dados
    printf("Qual o seu nome: ");
    scanf("%s", n); // quando for scanf("%s") não usar & antes da variavel | uma string já é um endereço completo
    
    printf("Qual a sua idade? ");
    scanf("%d", &idade);
  
    printf("Qual o sexo (m/f): ");
    scanf(" %c", &sexo); // o espaco antes do %c eh importante para limpar o buffer do teclado

  // plot dos inputs
    printf("Boa noite %s sua idade eh %d e sexo %c\n", n, idade, sexo);
    
  return 0;
}
