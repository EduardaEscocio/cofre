#include <stdio.h>
#include <stdlib.h>

int main(){
    int senha[3] ={4,5,2};
    int tentativa[3] = {0,0,0};
    int quantia;
    int num1;
    int num2;
    printf("- BEM VINDO AO COFRE MAIS SECRETO DO MUNDO -\n ----------- Irei definir uma senha de 3 dígitos diferentes e você precisa acertá-la -------------\n");

    printf("Digite três números para abrir o cofre: ");
    while(tentativa != senha){
        for (int j = 0; j < 3; j++){
            scanf("%d", &tentativa[j]);
        }  

        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
            if (tentativa[i] == senha[i]){
                printf("O numero %d digitado na posição %d está correto\n",tentativa[i], i);
            }
            else if(tentativa[i] == senha[j]){
                printf("O numero %d está correto, porém na posição errada\n", tentativa[i]);
                if (quantia == 0){
                    num1 = tentativa[i];
                    quantia++;
                }
                
                else{
                    num2 = tentativa[i];
                    quantia++;
                }
            }
            else{
                printf("O numero %d digitado na posição %d não está correto\n", tentativa[i], i);
                }
            }
        }   
    }
}
