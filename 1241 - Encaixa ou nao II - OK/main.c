#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int n;

    scanf("%d",&n);
    setbuf(stdin,NULL);
    while(n--){
        char princ[1001];
        char teste[1001];

        int i;

        scanf("%s %s",&princ,&teste);
        setbuf(stdin,NULL);
        int tam_teste = strlen(teste);
        int tam_princ = strlen(princ);
        int Tot_soma =0 , j=0;

        for(i=tam_princ-tam_teste;i<tam_princ;i++){
            if(princ[i]==teste[j]){
                j++;
                Tot_soma++;
            }
            else{
                break;
            }
        }

        if(Tot_soma==tam_teste){
            printf("encaixa\n");
        }
        else{
            printf("nao encaixa\n");
        }


    }

}
