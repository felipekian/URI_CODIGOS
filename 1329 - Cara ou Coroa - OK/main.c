#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    while(scanf("%d",&n) && n!=0){

        int vet[n], i;
        int maria=0 , joao=0;
        for(i=0;i<n;i++){
            scanf("%d",&vet[i]);
            if(vet[i]==0){
                maria++;
            }
            else{
                joao++;
            }
        }
        printf("Mary won %d times and John won %d times\n",maria,joao);

    }

}
