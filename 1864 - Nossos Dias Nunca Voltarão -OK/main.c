#include <stdio.h>
#include <stdlib.h>

int main(){

    char Frase[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    int i,N;
    scanf("%d",&N);

    for(i=0;i<N;i++){
        printf("%c",Frase[i]);
    }
    printf("\n");
}
