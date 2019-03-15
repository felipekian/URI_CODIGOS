#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int N;

    while(scanf("%d",&N)&& N!=0){
        if(N>=0 && N<=15){

            int i,j;

            for(i=0;i<N;i++){
                for(j=i;j<N+i;j++){
                        int Q = pow(2,j);
                    printf(" ");
                    printf("%d",Q);

                }
                printf("\n");
            }
            printf("\n");


        }
    }

}
