#include <stdio.h>
#include <stdlib.h>

int main(){

    int X;

    while(scanf("%d",&X) && X!=0){

        int i;

        for(i=1;i<=X;i++){
            printf("%d",i);
            if(i<X){
            printf(" ");
            }
        }
        printf("\n");
}
}
