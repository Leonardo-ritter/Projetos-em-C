#include <stdio.h> 
#include <stdlib.h> 

void calculaFibonnaci();
int fibonnaci();
int vetor[100];

int fibonnaci(int i)
{
    if (vetor[i]==0){
        CalcFibonnaci(i);
        printf("%d ", vetor[i]);
    }else{
        return vetor[i];
    }
}
int main (int argc, char* argv[])
{
    int N, i=0, haha;
    int *vetor;
    printf("digite o numero de serie fibonnacci: ");
    scanf("%d", &N);
    for(i=1; i<=N; i++)
        fibonnaci(i);
}
void CalcFibonnaci (int i){
    if(i==1 || i==2){
        vetor[i] = 1;
    }
    else {
        vetor[i] = fibonnaci(i-1) + fibonnaci(i-2);
    }
}