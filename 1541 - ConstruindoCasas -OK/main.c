#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int a , b , porcentagem;

    while(scanf("%d",&a)&& a!=0){

        scanf("%d %d",&b,&porcentagem);

        int areaCasa = a * b;
        int P = areaCasa * (porcentagem / 100);
        int areaTerreno = floor(sqrt((areaCasa*100)/porcentagem));

        printf("%d\n", areaTerreno);
    }
}
