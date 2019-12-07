#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int n, k=0;

    while(scanf("%d\n",&n)&& n!=0) {

        int i,j,p;
        char nome[n][100];
        int vet_tam[n];
        int maior= 0;

        for(i=0; i<n; i++) {
            gets(nome[i]);
            setbuf(stdin,NULL);
        }
        //// formatação fdp usei o K
        if(k!=0){
            printf("\n");
        }

        char aux[100], pega[100];

        for(i=0; i<n; i++) {
            strcpy(pega,nome[i]);
            p=0;
            j=0;
            while(pega[j]==' ') {
                j++;
            }
            for(j; j<strlen(pega); j++) {
                if(pega[j]!=' ') {
                    aux[p] = pega[j];
                    p++;
                }
                if(pega[j]==' ' && pega[j-1]!=' ') {
                    aux[p] = pega[j];
                    p++;
                }

            }
            aux[p]='\0';
            while(aux[p]==' ' && aux[p-1]!=' ') {
                p--;
            }
            aux[p]='\0';

            if(aux[p-1]==' ') {
                aux[p-1]='\0';
            }

            vet_tam[i]=0;
            vet_tam[i] = strlen(aux);

            strcpy(nome[i],aux);
            strcpy(aux,"");
        }

        maior=vet_tam[0];
        for(i=1; i<n; i++) {
            if(maior < vet_tam[i]) {
                maior = vet_tam[i];
            }
        }
        k++;
        for(i=0; i<n; i++) {
            for(j=0; j<maior - strlen(nome[i]); j++) {
                printf(" ");
            }
            printf("%s",nome[i]);
            printf("\n");
        }


    }
    return 0;
}
