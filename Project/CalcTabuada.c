#include <stdio.h>

int main() {
    // definindo variavel
    int i, numero;

    printf("\nEscolha um numero para receber a tabuada dele.\n");
    scanf("%d", &numero);

    // plot da tabuada
    printf("\nTabuada do %d\n\n", numero);
    for (i = 1; i <= 10; i++)
    {
        // calculo da tabuada
        printf("%d x %d = %d\n", numero, i, numero * i);
    }
    return 0;
}
