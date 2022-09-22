#include <math.h> //Biblioteca para usar sin, cos, tg
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265 //Constante de Pi

                        /* ATIVIDADE 1 - CALCULO - ADS */
                /* Adryan, Bruno Ricardo, Luana, Lucas e Higor */
int main() {
    int op;
    float resultado, num, resultadoInvalido;
    double angulo,  x, k;
    printf("\tMENU\n");
    printf("Digite a opcao desejada\n");
    printf("1. Sen(x)\n");
    printf("2. Cos(x)\n");
    printf("3. Tg(x)\n");
    printf("4. f(x) = x^k\n");
    printf("5. f(x) = 1/x\n");
    printf("6. SAIR\n");
    scanf("%d", &op);

    switch (op) {
        case 1:
            system("cls");
            printf("Calculo de Seno\n");
            printf("Insira o valor do seno(x): ");
            scanf("%f", &num);
            resultado = sin(num);
            printf("Resultado do seno (x): %.4f radianos", resultado);
            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&op);
            system("cls");
            if(op == 6)
            {
                system("cls");
                return main ();
            }
            break;


        case 2:
            system("cls");
            printf("Calculo de Cosseno\n");
            printf("Insira o valor de (x): ");
            scanf("%f", &num);
            resultado = cos(num);
            printf("Resultado do cosseno de (%.2f): %.4f radianos", num, resultado);
            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&op);
            if(op == 6)
            {
                system("cls");
                return main ();
            }
            break;

            case 3:
                system("cls");
                printf("Calculo de Tangente\n");
                printf("Insira o valor do angulo(x): ");
                scanf("%lf", &x);
                resultadoInvalido = fmod(x, 90);    //fmod pega o resto da divisão por float
                resultado = tan(x);
                if (resultado == resultadoInvalido){
                    printf("Resultado Invalido");
                } else{
                printf("%.4lf radianos", resultado);
                }
                printf("\n6. Voltar ao menu principal:\n\n");
                scanf("%d",&op);
                if(op == 6)
                {
                    system("cls");
                    return main ();
                }
                break;

        case 4:
            system("cls");
            printf("Calculo de f(x)= x^k\n");
            printf("Insira o valor de x: ");
            scanf("%lf", &x);
            if (x == 0) {
                printf("Valor de X invalido");
            }else {
                printf("Insira o valor de k: ");
                scanf("%lf", &k);
                resultado = pow(x, k);
                printf("O resultado de f(%.2lf^%.2lf) = %.4f", x, k, resultado);
            }
            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&op);
            if(op == 6)
            {
                system("cls");
                return main ();
            }
            break;

        case 5:
            system("cls");
            printf("Calculo de f(x)\n");
            printf("Insira o valor de x: ");
            scanf("%lf", &x);
            if (x == 0){
                printf("Valor de X invalido, digite um numero diferente de 0");
            }
            resultado= 1/x;
            printf("O resultado de f(%.2lf) = %.4lf", x, resultado);
            printf("\n6. Voltar ao menu principal:\n\n");
            scanf("%d",&op);
            if(op == 6)
            {
                system("cls");
                return main ();
            }
            break;

        default:
            printf("Opcao invalida");
    }
    return 0;
}
