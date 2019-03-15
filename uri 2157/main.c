#include <stdio.h>
#include <stdlib.h>

int main(){

    int C;
    scanf("%d",&C);
    while(C--){

    int A,B;

    scanf("%d%d",&A,&B);
    int i;
    char * po[12221];
    for (i=A;i<=B;i++){
            po[i]=i;

        printf("%d",i);
    }
    for(i=B;i>=A;i--){
        printf("%c",po[i]);

    }
        printf("\n");
    }

}
