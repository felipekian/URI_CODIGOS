#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int tot_sub = 0 , ultima_posicao = 0;

int main(){
    char sub[99999];
    char string[999999];
    int cont = 1;
    int ii = 0;

    while(scanf("%s",&sub)!=EOF){
        scanf("%s",&string);

        if(ii!=0){
            printf("\n");
            ii++;
        }
        ii++;

        procura(sub,string);
        imprimir(cont);
        cont++;
        tot_sub = 0;
        ultima_posicao = 0;
    }


    return 0;
}


void procura(char sub[] , char string[]){
    if(strlen(sub) > strlen(string)){

        ultima_posicao = 0;
        tot_sub = 0;

    }else{
        tot_sub = 0;
        ultima_posicao = 0;
        int i,j;
        for(i=0 ; i <= strlen(string) - strlen(sub) ; i++){
            if(sub[0]==string[i]){
                int saber_posicao = i+1;
                int aux = i;
                int r = 0;
                for(j=0;j<strlen(sub);j++){

                    if(sub[j] == string[aux]){
                        aux++;
                        r++;
                    }else{
                        break;
                    }

                }
                if(r == strlen(sub)){
                ultima_posicao = saber_posicao;
                tot_sub+=1;
                saber_posicao = 0;
                i = (i+strlen(sub)) -1;
                }
            }

        }
    }

}

void imprimir(int*cont){
    if(tot_sub == 0 ){

        printf("Caso #%d:\n",cont);
        printf("Nao existe subsequencia\n");

    }else{

        printf("Caso #%d\n",cont);
        printf("Qtd.Subsequencias: %d\n",tot_sub);
        printf("Pos: %d\n",ultima_posicao);

    }


}
