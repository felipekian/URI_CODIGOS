#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    int n; int cont= 1;

    while(scanf("%d",&n)&& n != 0){
        int a , b,i , soma=0;
        char nome[2][15];

        for(i=0;i<2;i++){
            scanf("%s",nome[i]);
        }
        printf("Teste %d\n",cont);
        cont++;
        for(i=0;i<n;i++){
            scanf("%d %d",&a, &b);


            soma =  a + b;

            if(soma%2==0){
                printf("%s\n",nome[0]);

            }
            else{
                printf("%s\n",nome[1]);
            }
        }
        printf("\n");

    }
}
