#include <stdio.h>
#include <math.h>

//Atividade aula dia 18/08/22;
int main()
{
  float xA = 6.0, xB = 3.0, yA = 1.0, yB = 5.0, soma; //entrada e saida "soma";

  soma = sqrt(pow(xB - xA,2)+ pow(yB - yA,2)); // pow = potenciacao;
  printf("%.2lf\n",soma); //resultado;
}
