#include <stdio.h>
#include <stdlib.h>
int main()
{ 
    int num = 0;
    int digiteNum, resultado, tabuada;
    int numSoma, numSoma2;
    int sair = 1;

    do{
        printf(" --------menu--------\n");
        printf("1 - somar\n"); 
        printf("2 - subtrair\n");
        printf("3 - multiplicador tabuada\n");
        printf("4 - dividir\n");
        scanf("%d", &digiteNum);
        system("cls");

        if (digiteNum == 1){ //soma
            printf("Digite dois numeros para somar: \n");
            scanf("%d %d", &numSoma, &numSoma2);
            resultado = numSoma + numSoma2;
            printf("%d + %d = %d \n",numSoma, numSoma2, resultado);
        }
        else if (digiteNum == 2){ //Subtrair
            printf("Digite dois numeros para subrair: \n");
            scanf("%d %d", &numSoma, &numSoma2);
            resultado = numSoma - numSoma2;
            printf("%d - %d = %d \n", numSoma, numSoma2, resultado);
        }

        else if (digiteNum == 3){ //Multiplicador
            printf("digite um numero Multiplicador: \n");
            scanf("%d", &numSoma);
            for (tabuada = 1; tabuada < 11; tabuada = tabuada +1){
                resultado = tabuada * numSoma;
                printf("%d X %d = %d \n", tabuada, numSoma, resultado);
            }
        }
        else if (digiteNum == 4){
            printf("Digite dois numero para dividir");
            scanf("%d %d", &numSoma, &numSoma2);
            resultado = numSoma / numSoma2;
            printf("%d / %d = %d \n", numSoma, numSoma2, resultado);
        }
    }while (digiteNum =! 0);
    
}