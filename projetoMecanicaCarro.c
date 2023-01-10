#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  char veiculo[10];

  int km;
  int verdade = 1;

  do{
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    printf("Data: %d/%d/%d\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    printf("Orientacao de 40.000km para baixo verificar com mais frequencia \n");
    printf("Orientacao de 60.000km para cima problemas mais graves - verificar com mecanico\n");
    printf("Qual veiculo seu veiculo: \n");
    
    scanf("%s", veiculo);
    printf("Qual sua quilometragem percorrido: \n");
    scanf("%d", &km);
    
    if (km <= 40000){
      CincoVinteMil(km);     
    } else if(km > 40000){
      sessentaMil(km);
    }
  }while(verdade != 0);
}

void CincoVinteMil(int N){
  if (N >= 20000 )
    {
      printf("segue a lista do que devera ser revisado km: 20mil\n");
      printf("1 - Filtro de combustivel\n");
      printf("2 - Filtro do oleo\n");
      printf("---------------------------------------------\n");
    } if (N >= 5000 ) 
    {
      printf("\nSegue a lista do que devera ser revisado: 5 mil a 15 mil km\n");
      printf("1 - Oleo lubrificante. \n"); 
      printf("---------------------------------------------\n");
    }
  if (N >= 10000)
  {
    printf("\nSegue a lista do que devera ser revisado: 10mil a 20mil km\n");
    printf("1 - correia do alternador. \n");
    printf("2 - Correia do compressor do ar-condicionado.\n"); 
    printf("3 - Verificar as velas 15mil a 100mil km.\n"); 
    printf("---------------------------------------------\n");        
  }
}
void sessentaMil(int N){
  if (N >= 60000)
  { 
    printf("1 - Fluido de freio: \n");
    printf("---------------------------------------------\n");        
  }else if (N <= 60000)
  {
    printf("1 - correia dentada: \n");
    printf("2 - correia polu-y: \n");
    printf("3 - filtro de ar: \n");
    printf("4 - correia dentada: \n");
    printf("---------------------------------------------\n");        
  }
}
