#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char N[10];

    scanf("%s",&N);

    int i;

    for(i=strlen(N)-1;i>=0;i--){

        printf("%c",N[i]);
    }
    printf("\n");
}
