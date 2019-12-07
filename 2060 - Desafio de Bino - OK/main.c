#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, M2=0,M3=0,M4=0,M5=0;
    scanf("%d",&n);

    int vet[n], i;

    for(i=0;i<n;i++){

        scanf("%d",&vet[i]);

    }

    for(i=0;i<n;i++){
        if(vet[i]%2==0){
            M2++;
        }
        if(vet[i]%3==0){
            M3++;
        }
        if(vet[i]%4==0){
            M4++;
        }
        if(vet[i]%5==0){
            M5++;
        }
    }

    printf("%d Multiplo(s) de 2\n",M2);
    printf("%d Multiplo(s) de 3\n",M3);
    printf("%d Multiplo(s) de 4\n",M4);
    printf("%d Multiplo(s) de 5\n",M5);


}
