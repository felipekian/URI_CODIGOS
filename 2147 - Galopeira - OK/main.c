#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int n;
    scanf("%d",&n);
    getchar();
    while(n--){
        char nome[100000];
        gets(nome);

        int p = strlen(nome);

        printf("%d.%.2d\n",p/100,p%100);

    }

}
