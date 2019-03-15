#include <stdio.h>
#include <stdlib.h>
void Cartas(int vet[],int tam);
int main(){

    int n;

    while(scanf("%d",&n)&&n!=0){

        int vet[n];
        int i , j;

        for(i=0;i<n;i++){
            vet[i] = i+1;
        }

           Cartas(vet , n);
    }

    return 0;
}

void Cartas(int vet[],int tam){
        int i, z=0,aux=0 ,j, h=tam , u=1;

        printf("Discarded cards: ");
        for(i=0;i<tam;i++){

               if(z==0 || i==tam-1){
                    if(i==tam-1){
                    printf("\nRemaining card: ");
                    printf("%d\n",vet[0]);
                    break;
                    }
                    else{
                        printf("%d",vet[0]);
                        z++;
                    }

               }
               else{
                    printf(", %d",vet[0]);
               }


            for(j=0;j<tam-1;j++){
                vet[j] = vet[j+1];
            }

            u++;

            aux = vet[0];
            for(j=0;j<tam-u;j++){
                vet[j] = vet[j+1];
            }
            vet[tam-u] = aux;
        }
}
