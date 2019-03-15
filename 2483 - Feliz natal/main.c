#include <stdio.h>
#include <stdlib.h>

void imprime(int t){
    int i;
    printf("Feliz nat");
    for(i=0;i<t;i++){
        printf("a");
    }
    printf("l!\n");
}

int main(){

    int tam;

    scanf("%d",&tam);
    imprime(tam);

    return 0;
}
