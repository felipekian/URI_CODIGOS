#include <stdio.h>

int main() {
    float nota =0;
    float media = 0;
    int contador = 0;
    char escolha;

    do {
        contador = 0;
        media = 0;

        while(contador < 2) {
            scanf("%f", &nota);

            if(nota <= 10 && nota >= 0) {
                media += nota;
                contador++;
            } else {
                printf("nota invalida\n");
            }

        }

        printf("media = %.2f\n", media/2);


        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf(" %c", &escolha);

            if(escolha == '2')
            break;

        } while(escolha != '1');



    } while(escolha == '1');


    return 0;
}
