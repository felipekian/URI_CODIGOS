#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int n;

    scanf("%d",&n);

    while(n--){

        char nomes[4][100];
        unsigned long long int n1 ,n2 , soma=0 ,i;

        for(i=0;i<4;i++){
            scanf("%s",&nomes[i]);
        }

        scanf("%d %d",&n1,&n2);

        soma = n1 + n2;

        if(soma%2==0){

            if(strcmp(nomes[1],"PAR")==0){
                printf("%s\n",nomes[0]);

            }else{
                printf("%s\n",nomes[2]);
            }

        }
        else{
                if(strcmp(nomes[1],"IMPAR")==0){
                    printf("%s\n",nomes[0]);
                }
                else{
                    printf("%s\n",nomes[2]);
                }

        }



    }

}
