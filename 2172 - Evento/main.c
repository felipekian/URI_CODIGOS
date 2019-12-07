#include <stdio.h>
#include <stdlib.h>

int main(){

    int i; int j;

    while(scanf("%d %d",&i,&j)&& i!=0 && j!=0){

        j = j*i;
        printf("%d\n",j);
    }

}
