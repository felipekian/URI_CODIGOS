#include <stdio.h>
#include <stdlib.h>


int main(){

        int n,i;

        scanf("%d",&n);

        char cursos[n][100];

        for(i=0;i<n;i++){
            scanf(" %[^\n]s",&cursos[i]);
        }

        printf("Ciencia da Computacao\n");
}
