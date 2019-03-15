#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Procura_sub_string( char Texto[] , char palavra[] ){

    if(strcmp(Texto , palavra)==0){
        return 1;
    }
    else if(strlen(palavra) > strlen(Texto)){
        return 0;
    }
    else{
        int i,j;
            for(i=0 ; i<=strlen(Texto)-strlen(palavra) ; i++){

                int vet_teste[strlen(palavra)];

                for(j=0;j<strlen(palavra);j++){
                    vet_teste[j] = 0;
                }
                int aux = i;

                if(palavra[0]==Texto[i]){
                    for(j=0 ; j<strlen(palavra) ; j++){
                        if(palavra[j]==Texto[aux]){
                            vet_teste[j]=1;
                            aux++;
                        }else{
                            break;
                        }
                    }
                    int saber = 0;

                if(saber == 0 && Texto[aux]==' ' || Texto[aux]=='\0'){
                    return 1;
                }

                }
            }
        }
        return 0;
    }



int main(){

    char palavra[] = "fodinha";
    char texto[] = "meu pai e foda e eu sou fodinha negoa nego";
    int saber =-1;

    saber = Procura_sub_string(texto , palavra);

    if( saber == 0){
        printf("Nao existe\n");
    }else if( saber == 1){
    printf("Existe\n");
    }

    return 0;
}
