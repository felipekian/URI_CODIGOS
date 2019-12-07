#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main(){
    char frase[5000];

    while(gets(frase)!=NULL){
        setbuf(stdin,NULL);


        int i;
        int tam_frase =  strlen(frase);

        for(i=0;i<tam_frase;i++){
        frase[i] = towlower(frase[i]);
        }

        char Consoantes[1000];
        int cont_consoantes = 0;
        if(frase[0]!=' '){
            Consoantes[cont_consoantes] = frase[0];
            cont_consoantes++;
        }
        for(i=0;i<tam_frase;i++){
            if(frase[i-1]==' ' && frase[i]!=' '){
                Consoantes[cont_consoantes] = frase[i];
                cont_consoantes++;
            }

        }
        Consoantes[cont_consoantes]='\0';

        int cont_aliteracao = 0;
        char teste_aliteracao = 3;
        for(i=0;i<strlen(Consoantes);i++){
            if(Consoantes[i]==Consoantes[i+1]){
                teste_aliteracao = Consoantes[i];
                cont_aliteracao++;
                while(Consoantes[i+2]==teste_aliteracao){
                    i++;
                }
            }
        }
        strcpy(frase,"");
        strcpy(Consoantes,"");
        printf("%d\n",cont_aliteracao);


    }


}
