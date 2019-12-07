#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inicio(){
    char palavra[1000001];
    char texto[300001];
    int cont = 1;
    int cu = 0;
    while(gets(palavra)){
        if(strcmp(palavra , "0\0")==0){
            return;
        }
        gets(texto);
        int recebe = 0;
        recebe = analise(texto , palavra);

            if(cu!=0){
                printf("\n");
            }

         printf("Instancia %d\n",cont);
            cont++;
        if(recebe == 0){

            printf("falsa\n");
            recebe = 0;


        }else{

            printf("verdadeira\n");
            recebe = 0;

        }
        cu++;
    }

}

int analise( char texto[] , char palavra[] ){

        int i , j , saber = 0 , tot = 0;

        for(i=0;i <= strlen(texto) - strlen(palavra);i++){

            if(texto[i]==palavra[0]){
                int aux = i;

                for(j=0;j<strlen(palavra);j++){
                    if(texto[aux]==palavra[j]){
                        tot++;
                        aux++;
                    }else{
                        tot=0;
                        break;
                    }

                }
                if(tot==strlen(palavra)){
                    saber++;
                    i += tot-1 ;
                    tot=0;
                }

            }

        }

return saber;
}


int main(){
    inicio();
    return 0;
}
