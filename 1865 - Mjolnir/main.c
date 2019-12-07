#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {

    int c;

    scanf("%d",&c);
    char Certo[5]= {"Thor"};
    char nome[20];
    int forca=0;

    while(c--) {

        scanf("%s",&nome);
        scanf("%d",&forca);



        if(strcmp(nome,"Thor")==0) {
            printf("Y\n");
        } else {
            printf("N\n");
        }


    }


    return 0;
}
