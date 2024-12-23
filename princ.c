#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

        int senha[3] ={4,5,2};
        int tentativa[3] = {0,0,0};
        int nums[10] = {0,1,2,3,4,5,6,7,8,9};
        int quantia;
        int count;

     int verificar(){
        count = 0;
         for (int i = 0; i < 3; i++){
            for (int j = 0; j < 3; j++){
                scanf("%d", &tentativa[j]);
                if(tentativa[i] == nums[i]){
                    count += 1;
                }
         
         }
    if (count != 0){
        printf("Você digitou algo que não é um numero, tente novamente\n");
        return 1;
        continue;
    }
     }
    
    return 0;
}
int main(){

    printf("- BEM VINDO AO COFRE MAIS SECRETO DO MUNDO -\n ----------- Irei definir uma senha de 3 dígitos diferentes e você precisa acertá-la -------------\n");
    printf("\033[0;31m");
    printf("  _______________________\n");
    printf(" /                       \\\n");
    printf("|   _________________     |\n");
    printf("|  |                 |    |\n");
    printf("|  |    _________    |    |\n");
    printf("|  |   |         |   |    |\n");
    printf("|  |   |  O      |   |    |\n");
    printf("|  |   |_________|   |    |\n");
    printf("|  |                 |    |\n");
    printf("|  |_________________|    |\n");
    printf("|                         |\n");
    printf(" \\_______________________/\n");
    printf("\033[0m");




    while(tentativa != senha){
        if(quantia == 3){
            printf("\033[0;32m");
            printf("Parabéns, você acertou a senha e o cofre está aberto!\n");
            printf("  _______________________\n");
            printf(" /                       \\\n");
            printf("|   _________________     |\n");
            printf("|  |                 |    |\n");
            printf("|  |   ___________   |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |           |  |    |\n");
            printf("|  |  |___________|  |    |\n");
            printf("|  |                 |    |\n");
            printf("|  |_________________|    |\n");
            printf("|                         |\n");
            printf("|      >>>>>>>>           |\n");
            printf(" \\_______________________/\n");
            break;
        }
        else{
            quantia = 0;
        }
        printf("Digite três números para abrir o cofre: \n");
            int resultado;
            resultado = verificar();
            if (resultado == 1){
                printf("a\n");
            }

        }  
        for (int i = 0; i < 3; i++){
            bool encontrado = false;
            for (int j = 0; j < 3; j++){

                if(tentativa[i] == senha[j]){    
                    
                    encontrado = true;

                    if(tentativa[i] == senha[i]){
                        quantia++;
                        printf("O número %d digitado na posição %d está correto\n", tentativa[i], i);
                    
                    } 

                    else{    
                        printf("O número %d digitado, está na senha, porém na posição errada \n", tentativa[i]);
                    }

                }

                }
                    if (encontrado == false){
                        printf("O número %d digitado não está na senha\n", tentativa[i]);
                    }        
            }
        }