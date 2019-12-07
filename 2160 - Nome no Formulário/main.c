#include <stdio.h>
#include <stdlib.h>

int main(){

    char nome[501];

    scanf(" %500[^\n]",nome);

    int i, cont=0;

    for(i=0;nome[i]!='\0';i++){
        cont++;
    }

    if(cont <= 80){
            printf("YES\n");
    }
    else{
            printf("NO\n");
    }
}
