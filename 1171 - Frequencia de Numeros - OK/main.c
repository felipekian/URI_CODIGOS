#include <stdio.h>
#include <stdlib.h>

void SelectionSort(int vet[] , int tam){
        int menor , indiceMenor;
        int i , j;

        for(i=0;i<tam-1;i++){
            menor = vet[i];
            indiceMenor = i;

            for(j=i+1;j<tam;j++){
                if(menor > vet[j]){
                    menor = vet[j];
                    indiceMenor = j;
                }
            }
            vet[indiceMenor] = vet[i];
            vet[i] = menor;
        }

}

int main(){
    int n;
    scanf("%d",&n);
    int i; int vet_num[n];

    for(i=0;i<n;i++){
        scanf("%d",&vet_num[i]);
    }

    SelectionSort(vet_num , n);

    int j, cont =0;

    for(j=0;j<n;j++){
            int aux = vet_num[j];
            cont = 0;

        for(i=0;i<=n;i++){

            if(aux == vet_num[i]){
                cont++;
            }
        }
        j+=cont-1;
        printf("%d aparece %d vez(es)\n",aux,cont);
    }



    return 0;
}
