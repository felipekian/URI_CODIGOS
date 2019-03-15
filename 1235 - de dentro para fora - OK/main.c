#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int n;
    scanf("%d",&n);
    setbuf(stdin,NULL);
    while(n--){
        char frase[102];
        gets(frase);
        setbuf(stdin,NULL);
        int i;
        for(i=(strlen(frase))/2-1;i>=0;i--){
            printf("%c",frase[i]);
        }
        for(i=strlen(frase);i>(strlen(frase))/2
        ;i--){
            printf("%c",frase[i]);
        }
        printf("\n");
    }


    return 0;
}
