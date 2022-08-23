#include <math.h> //Biblioteca para usar sin, cos, tg
#include <stdlib.h>
#define PI 3.14159265 //Constante de Pi

int main() {
    int op;
    double angulo, result, parametro, x;
    printf("\tMENU\n");
    printf("Digite a opcao desejada\n");
    printf("1. Sen(x)\n");
    printf("2. Cos(x)\n");
    printf("3. Tg(x)\n");
    scanf("%d", &op);
    switch (op) {
        case 1:
            printf("Calculo de Seno\n");
            printf("Insira o valor do angulo(x): ");
            scanf("%lf", &x);
            parametro = x;
            result = sin(parametro *PI / 180); //Resultado recebe a função do sin com a conversão para radiano
            printf("O Seno de (%.2lf):  %.4lf rad", parametro, result);
            break;

        case 2:
            printf("Calculo de Cosseno\n");
            printf("Insira o valor do angulo(x): ");
            scanf("%lf", &x);
            parametro = x;
            result = cos(parametro * PI / 180); //Resultado recebe a função do cos com a conversão para radiano
            printf("O Cosseno de (%.2lf):  %.4lf rad", parametro, result);
            break;

        /*case 3:
            printf("Calculo de Tangente\n");
            printf("Insira o valor do angulo(x): ");
            scanf("%lf", &x);
            break;*/

        default:
            printf("Opcao invalida");
    }
    return 0;
}
