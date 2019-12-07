#include <stdio.h>
#include <stdlib.h>

void SelectionSortCrescente(int vet[] , int tam);
void SelectionSortDecrescente(int vet[] , int tam);
int main(){

    unsigned long int n,totImpar = 0,aux=0;
    scanf("%lu",&n);
    int  i;
    unsigned long int vetPar[n],totPar = 0, vetImpar[n];
    for(i=0;i<n;i++){
        scanf("%lu",&aux);
        if(aux%2==0){
            vetPar[totPar++] = aux;
        }
        else{
            vetImpar[totImpar++] = aux;
        }
    }

    SelectionSortCrescente(vetPar , totPar);

    SelectionSortDecrescente(vetImpar,totImpar);

    for(i=0;i<totPar;i++){
        printf("%lu\n",vetPar[i]);
    }

    for(i=0;i<totImpar;i++){
        printf("%lu\n",vetImpar[i]);
    }
}

void SelectionSortCrescente(int vet[] , int tam){
    int menor , indiceMenor;
    int i ,j;

    for(i=0;i<tam-1;i++){
        menor = vet[i];
        indiceMenor = i;
        for(j=i+1 ; j<tam ; j++){
            if(menor > vet[j]){
                menor = vet[j];
                indiceMenor = j;
            }
        }
        vet[indiceMenor] = vet[i];
        vet[i] = menor;
    }
}
void SelectionSortDecrescente(int vet[] , int tam){
    int menor , indiceMenor;
    int i ,j;

    for(i=0;i<tam-1;i++){
        menor = vet[i];
        indiceMenor = i;
        for(j=i+1 ; j<tam ; j++){
            if(menor < vet[j]){
                menor = vet[j];
                indiceMenor = j;
            }
        }
        vet[indiceMenor] = vet[i];
        vet[i] = menor;
    }
}
