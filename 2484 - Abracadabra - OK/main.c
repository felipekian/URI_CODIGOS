#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    char nome[101];

    while(scanf("%s",&nome)!=EOF){

        int i,j=0, l;

        for(j=0;j<strlen(nome);j++){
                for(l=0;l<j;l++){
                    printf(" ");
                }
            for(i=0;i<strlen(nome)-j;i++){
                    if(i==strlen(nome)-j-1)
                    printf("%c",nome[i]);
                    else
                    printf("%c ",nome[i]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
