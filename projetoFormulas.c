#include <stdio.h>
#include <math.h>

int main() {
	int formula;
	float lado, altura, base, diagonalMaior, diagonalMenor, baseMaior, baseMenor, raio;
	float resultado, pi = 3.14;
    
    printf("1 - Triangulo \n");
    printf("2 - Retanlo\n");
    printf("3 - Quadrado\n");
    printf("4 - Trapezio\n");
	printf("5 - Losango\n");
    printf("6 - circulo\n");
	printf("Digite o a opcao que voce deseja:\n");
    
	scanf("%d", &formula);
	
	switch (formula) {
		case 1:
			printf("Digite a base e a altura:\n ");
			scanf("%f %f", &base, &altura);
			resultado = base * altura / 2;			
			break;

		case 2:
			printf("Digite a base e a altura:\n");
			scanf("%f %f", &base, &altura);
			resultado = base * altura;
			break;
            
		case 3:
			printf("Digite o lado:\n");
			scanf("%f", &lado);
			resultado = lado * lado;
            break;

		case 4:
			printf("Digite a base maior, base menor e a altura\n");
			scanf("%f %f %f", &baseMaior, &baseMenor, &altura);
			resultado = (baseMaior + baseMenor) * altura / 2;
            break;
			
		case 5:
			printf("Digite a diagonal maior e a diagonal menor\n");
			scanf("%f %f" , &diagonalMaior, &diagonalMenor);
			resultado = (diagonalMaior * diagonalMenor / 2);
			break;

		case 6: 
            printf("Digite o Raio do circulo\n");
            scanf("%f", &raio);
            resultado = (pi * raio);
			break;
	}
	
	printf("Resultado = %f", resultado);
	
}