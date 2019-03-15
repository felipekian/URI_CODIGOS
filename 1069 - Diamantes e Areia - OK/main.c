#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int diamente(char nome[]){

    char testeFinal[1200];
    int i,j=0,TOTdiamante=0;

    for(i=0;i<strlen(nome);i++){
        if(nome[i]=='<' || nome[i]=='>'){
             testeFinal[j] = nome[i];
             j++;
        }
    }
    testeFinal[j]='\0';

    for(i=0;i<strlen(testeFinal);i++){
            for(j=i+1;j<strlen(testeFinal);j++){

                if(testeFinal[i]=='<' && testeFinal[j]=='>'){
                    TOTdiamante++;
                    testeFinal[i]=testeFinal[j]='p';
                   // printf("Total de diamante %d  i=%d=%c j=%d=%c\n",TOTdiamante,i,testeFinal[i],j,testeFinal[j]);
                }

            }
    }

    return TOTdiamante;

}


int main(){

    int n,i;
    char nome[1200];

    scanf("%d",&n);
  //  printf("total de vezes %d\n",n);

    for(i=0;i<n;i++){

        scanf("%s",&nome);
        setbuf(stdin, NULL);
  //      printf("Nome digitado = %s\n",nome);

        int totalDiamantes = diamente(nome);

        printf("%d\n",totalDiamantes);
    }

return 0;
}
