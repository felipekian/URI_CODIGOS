#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    resolucao();
    return 0;
}

void resolucao(){
    int n , i , j , k = 0;

    while(scanf("%d",&n)&&n!=0){
        getchar();
        char nome[n][100];

        for(i=0;i<n;i++){
            gets(nome[i]);

        }

        int maior = strlen(nome[0]);
        if(k!=0)
         printf("\n");

        for(i=1;i<n;i++){
            if(strlen(nome[i]) > maior){
                maior = strlen(nome[i]);
            }
        }

        for(i=0;i<n;i++){
            for(j=0;j<maior - strlen(nome[i]);j++){
                printf(" ");
            }
            printf("%s\n",nome[i]);
        }
        k++;

    }
}
