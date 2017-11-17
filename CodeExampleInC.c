#include<stdio.h>

#define ANDAR 30
#define SALA  8

int main (){

    char predio[ANDAR][SALA];
    int opcao, i, j, tipoaluguel, andar, sala, auxiliar;
    float porcentagemlivres, receita;
    
    // for para que todos os locais disponiveis estejam vazios antes na inicializacao do programa
    for(i = 0; i<ANDAR;i++){
        for(j=0;j<SALA;j++){
            predio[i][j] = '*';
        }
    }

    printf("------------------------------------------------------\n");
    printf ("Bem vindo ao programa de registro da sua empresa!\n");
    printf("------------------------------------------------------\n\n");
    do{
        printf("------------------------------------------------------\n");
        printf ("Escolha uma das opcoes abaixo:\n");
        printf ("0 - Sair do sistema\n");
        printf ("1 - Visualizar andares e salas\n");
        printf ("2 - Realizar aluguel de uma sala\n");
        printf ("3 - Cancelar aluguel de uma sala\n");
        printf ("4 - Total de imoveis alugados\n");
        printf ("5 - Receita do final do dia\n");
        printf("------------------------------------------------------\n");
        printf ("Digite sua opcao: ");
        scanf ("%d", &opcao);
    
        switch (opcao){
            // Finalizando o programa
            case 0:
                printf("------------------------------------------------------\n");
                printf("PROGRAMA FINALIZADO COM SUCESSO\n");
                printf("------------------------------------------------------\n");
            break;
        
            // Exibindo a matriz de alugueis
            case 1:
                // for para exibir a matriz de alugueis
                printf ("LEGENDA (TIPO DE ALUGUEL):\n");
                printf ("* - Nao Alugado\n");
                printf ("D - Diario\n");
                printf ("S - Semanal\n");
                printf ("M - Mensal\n");
                printf ("A - Anual\n\n");
                
                for(i=0; i<ANDAR; i++){
                    for(j=0; j<SALA; j++){
                        printf("%c ", predio[i][j]);
                    }
                    printf("\n");
                }
            break;
        
            // Realizando aluguel de uma sala
            case 2:
                printf ("ESCOLHA O SEU TIPO DE ALUGUEL:\n");
                printf ("1 - Diario\n");
                printf ("2 - Semanal\n");
                printf ("3 - Mensal\n");
                printf ("4 - Anual\n\n");
                printf ("Digite sua opcao: ");
                scanf ("%d", &tipoaluguel);

                if(tipoaluguel < 5 && tipoaluguel > 0){
                    printf ("Digite o numero do andar:(Entre 0 e 29) ");
                    scanf ("%d", &andar);
                    printf ("Digite o numero da sala:(Entre 0 e 7) ");
                    scanf ("%d", &sala);
                    
                    if(andar > 29 || andar < 0){
                        printf("------------------------------------------------------\n");
                        printf("ERRO - ANDAR INVALIDO\n");
                        printf("------------------------------------------------------\n");
                    } else if(sala > 7 || sala < 0){
                        printf("------------------------------------------------------\n");
                        printf("ERRO - SALA INVALIDA\n");
                        printf("------------------------------------------------------\n");
                    } else {
                        switch (tipoaluguel){
                            case 1:
                                if(predio[andar][sala] == '*'){
                                    predio[andar][sala] = 'D';
                                    printf("------------------------------------------------------\n");
                                    printf("SALA ALUGADA COM SUCESSO - TIPO: DIARIO\n");
                                    printf("------------------------------------------------------\n");
                                } else {
                                    printf("------------------------------------------------------\n");
                                    printf("A SALA JA ESTA ALUGADA\n");
                                    printf("------------------------------------------------------\n");
                                }
                            break;
    
                            case 2:
                                if(predio[andar][sala] == '*'){
                                    predio[andar][sala] = 'S';
                                    printf("------------------------------------------------------\n");
                                    printf("SALA ALUGADA COM SUCESSO - TIPO: SEMANAL\n");
                                    printf("------------------------------------------------------\n");
                                } else {
                                    printf("------------------------------------------------------\n");
                                    printf("A SALA JA ESTA ALUGADA\n");
                                    printf("------------------------------------------------------\n");
                                }
                            break;
    
                            case 3:
                                if(predio[andar][sala] == '*'){
                                    predio[andar][sala] = 'M';
                                    printf("------------------------------------------------------\n");
                                    printf("SALA ALUGADA COM SUCESSO - TIPO: MENSAL\n");
                                    printf("------------------------------------------------------\n");
                                } else {
                                    printf("------------------------------------------------------\n");
                                    printf("A SALA JA ESTA ALUGADA\n");
                                    printf("------------------------------------------------------\n");
                                }
                            break;
                            
                            case 4:
                                if(predio[andar][sala] == '*'){
                                    predio[andar][sala] = 'A';
                                    printf("------------------------------------------------------\n");
                                    printf("SALA ALUGADA COM SUCESSO - TIPO: ANUAL\n");
                                    printf("------------------------------------------------------\n");
                                } else {
                                    printf("------------------------------------------------------\n");
                                    printf("A SALA JA ESTA ALUGADA\n");
                                    printf("------------------------------------------------------\n");
                                }
                            break;
                        }
                    }
                } else {
                    printf("------------------------------------------------------\n");
                    printf("ERRO - TIPO INVALIDO\n");
                    printf("------------------------------------------------------\n");
                }
            
            break;
                
            // Realizando cancelamento de uma sala
            case 3:
                printf ("REALMENTE DESEJA CANCELAR O ALUGUEL:\n");
                printf ("1 - SIM\n");
                printf ("2 - NAO\n");
                printf ("Digite sua opcao: ");
                scanf ("%d", &tipoaluguel);

                if(tipoaluguel == 1){
                    printf ("Digite o numero do andar:(Entre 0 e 29) ");
                    scanf ("%d", &andar);
                    printf ("Digite o numero da sala:(Entre 0 e 7) ");
                    scanf ("%d", &sala);
                    
                    if(andar > 29 || andar < 0){
                        printf("------------------------------------------------------\n");
                        printf("ERRO - ANDAR INVALIDO\n");
                        printf("------------------------------------------------------\n");
                    } else if(sala > 7 || sala < 0){
                        printf("------------------------------------------------------\n");
                        printf("ERRO - SALA INVALIDA\n");
                        printf("------------------------------------------------------\n");
                    } else {
                        if(predio[andar][sala] != '*'){
                            predio[andar][sala] = '*';
                            printf("------------------------------------------------------\n");
                            printf("ALUGUEL CANCELADO COM SUCESSO\n");
                            printf("------------------------------------------------------\n");
                        } else {
                            printf("------------------------------------------------------\n");
                            printf("SALA NAO ALUGADA\n");
                            printf("------------------------------------------------------\n");
                        }
                    }
                } else if(tipoaluguel == 2){
                    printf("------------------------------------------------------\n");
                    printf("OPERACAO CANCELADA\n");
                    printf("------------------------------------------------------\n");
                } else {
                    printf("------------------------------------------------------\n");
                    printf("ERRO - OPCAO INVALIDA\n");
                    printf("------------------------------------------------------\n");
                }
            break;
                    
            // Porcentagem salas disponiveis e salas alugadas
            case 4:
                // verificando quantos lugares vazios existem
                auxiliar = 0;
                for(i=0; i<ANDAR; i++){
                    for(j=0; j<SALA; j++){
                        if(predio[i][j] == '*'){
                            auxiliar++;
                        }
                    }
                }

                porcentagemlivres = (auxiliar * 100) / 240.0;

                printf("------------------------------------------------------\n");
                printf ("PORCENTAGEM DE SALAS LIVRES: %.2f%%\n", porcentagemlivres);
                printf ("PORCENTAGEM DE SALAS ALUGADAS: %.2f%%\n", (100 - porcentagemlivres));
                printf("------------------------------------------------------\n");
            break;
                        
            // Receita total
            case 5:
                receita = 0;
                for(i=0; i<ANDAR; i++){
                    for(j=0; j<SALA; j++){
                        switch (predio[i][j]){
                            case 'D':
                                receita += 150.0;
                            break;
                            case 'S':
                                receita += 420.0; 
                            break;
                            case 'M':
                                receita += 1800.0;
                            break;
                            case 'A':
                                receita += 15000.0;
                            break;
                        }
                    }
                }

                printf("------------------------------------------------------\n");
                printf("RECEITA TOTAL DO PREDIO: %.2f \n", receita);
                printf("------------------------------------------------------\n");
            break;
            
            default:
                printf("------------------------------------------------------\n");
                printf ("ERRO - OPCAO INVALIDA\n");
                printf("------------------------------------------------------\n");
        }
            
    } while (opcao != 0);

    return 0;
}
