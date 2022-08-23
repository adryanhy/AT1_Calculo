#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int op, x;
    printf("\tMENU\n");
    printf("Digite a opcao desejada\n");
    printf("1. Sen(x)\n");
    printf("2. Cos(x)\n");
    printf("3. Tg(x)\n");
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Calculo de Seno\n");
            printf("Insira o valor de x: ");
            scanf("%d", &x);
            break;

        case 2:
            printf("Calculo de Cosseno\n");
            printf("Insira o valor de x: ");
            scanf("%d", &x);
            break;

        case 3:
            printf("Calculo de Tangente\n");
            printf("Insira o valor de x: ");
            scanf("%d", &x);
            break;

        default:
            printf("Opcao invalida");
    }
    return 0;
}
