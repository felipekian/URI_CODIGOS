#include <stdio.h>
#include <stdlib.h>

int main(){
    int testes;
    float ValorTotal = 0;

    scanf("%d",&testes);

    while(testes--){

    int escolha = 0, quantidade = 0;

    scanf("%d %d",&escolha ,&quantidade);

    if(escolha == 1001){
        ValorTotal +=(float) (1.50 * quantidade);
     }
     else if(escolha == 1002){
        ValorTotal +=(float) (2.50 * quantidade);
     }
     else if(escolha == 1003){
        ValorTotal +=(float) (3.50 * quantidade);
     }
     else if(escolha == 1004){
        ValorTotal +=(float) (4.50 * quantidade);
     }
     else if(escolha == 1005){
        ValorTotal +=(float) (5.50 * quantidade);
        }
    }

    printf("%.2f\n",ValorTotal);
}
