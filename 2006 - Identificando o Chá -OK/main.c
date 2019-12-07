#include <stdio.h>
#include <stdlib.h>

int main() {

    int certo, resposta;
    scanf("%d",&certo);
    int resultado =0;
    int C = 5;
    while(C--) {
        scanf("%d",&resposta);

        if(resposta == certo) {
            resultado+=1;
        }
    }
    printf("%d\n",resultado);

}
