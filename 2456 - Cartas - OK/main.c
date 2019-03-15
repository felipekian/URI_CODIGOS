#include <stdio.h>
#include <stdlib.h>
int crescente(int *vet[]){
    int i;
        for(i=1;i<5;i++){
            if(vet[i-1] > vet[i]){
                return 0;
            }
        }
        return 1;
}

int decrescente(int *vet[]){
    int i;
        for(i=1;i<5;i++){
            if(vet[i-1] < vet[i]){
                return 0;
            }
        }
        return 1;
}

int main(){

    int i;
    int vet[5];

    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }

    if(crescente(&vet) == 1){
        printf("C\n");
        return 0;
    }
    else if(decrescente(&vet) == 1){
            printf("D\n");
            return 0;
        }
        else{
                printf("N\n");
                return 0;
            }

    return 0;

}

