#include <stdio.h>
#include <stdlib.h>

void fibonacci();
int main(){

    int p =0 ;

    printf("Digite quantas sequencias de fibonacci: ");
    scanf("%d",&p);
    printf("\n");
    printf("A seguencia eh: \n\n");
     fibonacci(p);
     printf("\n");

}
void fibonacci(int n){

    int vet[n];
    vet[0]=1;
    vet[1]=1;
    int i;
    for(i=2;i<n;i++){
        vet[i]= vet[i-1] + vet[i-2];
    }
    for(i=0;i<n;i++){
        printf("%d ",vet[i]);
    }
}
