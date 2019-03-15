#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int existe(char palavra[], char frase[]){
    int teste[strlen(palavra)];
    int aux;
    if(strlen(palavra) > strlen(frase)){
        return 0;
    }
    if(strcmp(frase , palavra)==1){
        return 1;
    }
    int i,j,k;
    for(i=0 ; i <= (strlen(frase) - strlen(palavra))  ; i++){
        if(frase[i]==palavra[0]){
            for(k=0;k<strlen(palavra);k++){
                teste[k]=0;
            }
            aux=i;
            for(j=0;j<strlen(palavra);j++){
                if(palavra[j]==frase[aux]){
                    teste[j]=1;
                    aux++;
                }
            }
            int Ok = 1 , m;
            for(m=0;m<strlen(palavra);m++){
                if(teste[m]==0){
                    Ok = 0;
                }
            }
            return Ok;
        }
    }
}



int main(){
    char palavra[] ="azul";
    char frase[]="O carro e azul";

    if(existe(palavra, frase) == 1){
        printf("a palavra existe\n");
    }else{
        printf("a palavra nao exite\n");
    }


}
