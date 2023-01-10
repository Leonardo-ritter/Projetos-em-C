#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <stdbool.h> 

int main()
{
int num, numBaixo = 1, numAlto = 100;
int numPalpites, tentativas = 0;

srand(time(0));
num = (rand() % (numAlto - numBaixo))+ numBaixo;

do{
    printf("-----Jogo do Aroochado-----\n\n");
    printf("* Digite um numero entre %d e %d:\n",numBaixo, numAlto);
    scanf("%d", &numPalpites);
    system("cls");
    //printf("%d baaaaaaah ", num); -- debug

    if (num == numPalpites){
        printf("Parabens, voce acertou!! O numero secreto e: %d \n", num);
        printf("Numero de acertos: %d \n", tentativas);

    }else{
        tentativas++;   
        //printf("MAAAASS TCHÊEEEEEEEEE %d",tentativas); -- debug
        if (num > numPalpites){
            printf("Dica: Seu numero e menor que o numero secreto \n\n"); //  num < numpalpite;
            numBaixo = numPalpites + 1;
            
        }else{
            printf("Dica: seu numero e maior que o numero secreto \n\n"); //  num < numpalpite;
            numAlto = numPalpites - 1;
     
        }   
    }
}while (num != numPalpites);
    return 0;
    
}