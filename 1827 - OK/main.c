#include <stdio.h>
#include <stdlib.h>

int main(){

    int N,i,j;


    while(scanf("%d",&N)!= EOF){

        if(N>=5 && N<=101){

                for(i=1;i<=N;i++){
                    for(j=1;j<=N;j++){
                        if(j==1+N/2 && i==1+N/2){
                            printf("4");
                        }
                        else if(i>N/3 && i<=N-N/3 && j>N/3 && j<=N-N/3){
                            printf("1");
                        }
                        else if(i==j){
                            printf("2");
                        }
                        else if(i==N+1-j){
                            printf("3");
                        }
                        else{ printf("0");
                        }
                    }
                    printf("\n");
                }
                printf("\n");

        }
    }
}
