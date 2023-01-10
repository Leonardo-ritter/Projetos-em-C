#include <stdio.h> 
#include <time.h>

int main(){
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);
    printf("Data: %d/%d/%d \n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900);
    
    int idPaciente = 1; 
    char nomePaciente[10] = "Leonardo";
    int tipoSaguineoPaciente = 1;
    int idadePaciente = 23;
    char auxPaciente = tipoSaguineoPaciente+'N';

    int idDoador = 1;
    char nomeDoador[10] = "Jaspion"; 
    int tipoSanguineoDoador = 1;
    int idadeDoardor = 19; 
    char auxDoador = tipoSanguineoDoador+'N';

    int matriculaProfissional = 123432322;
    char nomeProfissional[10] = "Crausira";


    printf("id: %d \nNome Paciente: %s \nTipo sanguineo: %c \nidade do Paciente: %d \n", idPaciente, nomePaciente, auxPaciente, idadePaciente);
    printf("----------------------------------------------------\n");
    printf("id: %d \nNome doador: %s \nTipo sanguineo: %c \nidade do doador: %d \n", idDoador, nomeDoador, auxDoador, idadeDoardor);             
    printf("----------------------------------------------------\n");
    //Doação
    printf("1 - Doacao ou 2 - Transfusao\n");
    printf("\n----------------------------------------------------\n");

    int numero = 1;
    switch (numero)
    {
    case 1:
        if (idadeDoardor <= 18 || tipoSaguineoPaciente != tipoSanguineoDoador){
            printf("\nNao tem idade para doar sangue ou tipo sanguineo incopativel!!!\n");
        }else{
            printf("profissional: %s \nmatricula profissional: %d \n", nomeProfissional, matriculaProfissional); 
            printf("\nINFERMAGEM POR AMOR\n");
            printf("Aprovado!");
        }
        break;
    case 2: 
        if (idadeDoardor <= 18 || tipoSaguineoPaciente != tipoSanguineoDoador){
            printf("\nOuve alguma pendencia de cadastro ou tipo sanquineo diferente do doador\n");

        }else{
            printf("profissional: %s \nmatricula profissional: %d \n", nomeProfissional, matriculaProfissional); 
            printf("\nINFERMAGEM POR AMOR\n");
            printf("Aprovado! Doador %s e Receptor %s ",nomeDoador, nomePaciente);
        }
        break;
    default:
        printf("ERROR 404 - TENTE NOVAMENTE MAIS TARDE");
        break;
    }
    //if (numero == 1 && idadeDoardor <= 18 || tipoSaguineoPaciente != tipoSanguineoDoador){
} 

