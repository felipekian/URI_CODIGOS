#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int n;
    while(scanf("%llu",&n)&& n!=-1){

        if(n==0){
            printf("0\n");
        }
        else{
            n-=1;
            printf("%llu\n",n);
        }

    }

}
