#include <stdio.h>
#include <stdlib.h>

int main(){

    struct soma{
        int num1;
        int num2;
        int num3;

    }S;



    scanf("%d %d %d",&S.num1,&S.num2,&S.num3);

    int resultado = S.num1 + S.num2 + S.num3;
    int media = resultado /3;

    printf("Soma = %d\n",resultado);
    printf("Media dos 3 valores %d\n",media);

}
