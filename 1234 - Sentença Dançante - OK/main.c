#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
void inicio();

int main(){
    inicio();
    return 0;
}

void inicio(){
    char frase[55];

    while(gets(frase)!=NULL){

        int i, h = 1 , tot = strlen(frase) , recebe = 0;

        for(i=0;i<tot;i++){
            if(frase[i]==' '){
                printf(" ");
                continue;
            }else{
                char pop;
                if(h%2==0){
                    recebe = towlower(frase[i]);
                    pop = recebe;
                    printf("%c",pop);
                    h++;
                }else{
                    recebe = towupper(frase[i]);
                    pop = recebe;
                    printf("%c",pop);
                    h++;
                }

            }

        }

        printf("\n");
    }
}
