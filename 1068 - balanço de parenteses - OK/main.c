#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int total =0;

int parenteses(char nome[]){

    total =0;
    char testeFinal[1001];
    int i,j=0;
    int totparenteses=0;

    for(i=0;i<strlen(nome);i++){
        if(nome[i]=='(' || nome[i]==')'){
             testeFinal[j] = nome[i];
             total++;
             j++;
        }
    }
    testeFinal[j]='\0';

    for(i=0;i<strlen(testeFinal);i++){
        for(j=i;j<strlen(testeFinal);j++){

            if(testeFinal[i]=='(' && testeFinal[j]==')'){
                    totparenteses++;
                    testeFinal[i]=testeFinal[j]='p';

                    break;
                   // printf("Total de diamante %d  i=%d=%c j=%d=%c\n",TOTdiamante,i,testeFinal[i],j,testeFinal[j]);
                }
        }
    }

return totparenteses;

}

int main(){

    char nome[1100];

    while(scanf("%s",&nome)!=EOF){
        setbuf(stdin,NULL);
        int resp = parenteses(nome);

       // printf("TotalGolbal= %d e resp=%d\n",total,resp);

        if(total == 2*resp){
            printf("correct\n");
        }
        else{
            printf("incorrect\n");
        }

    }

    return 0;
}
