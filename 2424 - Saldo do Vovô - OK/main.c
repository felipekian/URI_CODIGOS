#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int n , saldo , i , menor_valor =0;

    scanf("%d %d",&n,&saldo);

    int vet_conta[n];

    for(i=0;i<n;i++){
        scanf("%d",&vet_conta[i]);
    }

    menor_valor = saldo;

    for(i=0;i<n;i++){
        saldo += vet_conta[i];

        if(saldo < menor_valor){
            menor_valor = saldo;
        }
    }

    printf("%d\n",menor_valor);

    return 0;
}
