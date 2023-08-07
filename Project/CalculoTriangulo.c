#include <stdio.h>
// Standrd input/output

int main() {
  // definindo variaveis
	float base, altura, area;

  // plot pergunta 
	printf("Digite a base:  ");
	scanf("%f", &base);
	
	printf("Digite a altura:  ");
	scanf("%f", &altura);
	
	// calculo do triangulo
  area = (base * altura ) /2;
	
  // plot resultado
  printf("O triangulo de base %f e altura %f tem area %f",
		base, altura, area);
	
	return 0;
}
