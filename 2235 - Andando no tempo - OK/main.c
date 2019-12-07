#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;

    scanf("%d %d %d",&a,&b,&c);

    if( (a+c)==b || (a+b)==c || (b+c)==a || a==b || b==c || a==c){
        printf("S\n");
    }
    else{
        printf("N\n");

    }

}
