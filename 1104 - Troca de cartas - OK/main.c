#include <stdio.h>
#include <stdlib.h>
#define max 100000

int main(){
    int a ,b;

    while(scanf("%d %d",&a,&b)){
        if(a==0 && b==0){
            break;
        }
        int i , vet_a[max] , vet_b[max], tot_a =0 , tot_b =0 , Ult_a=0,Ult_b=0;
        int aux =0;
        for(i=0;i<max;i++){
            vet_a[i] = 0;
            vet_b[i] = 0;
        }

        for(i=0;i<a;i++){
            scanf("%d",&aux);
            vet_a[aux] = aux;
            Ult_a = aux;
        }
        for(i=0;i<b;i++){
            scanf("%d",&aux);
            vet_b[aux] = aux;
            Ult_b = aux;
        }

        for(i=0;i<Ult_a+1;i++){
           if(vet_a[i]!= 0 && vet_b[i]==0){
                tot_a++;
           }
            else if(vet_a[i] != 0 && vet_b[i] == vet_a[i]){
                continue;
            }

        }

        for(i=0;i<Ult_b+1;i++){
            if(vet_b[i]!= 0 && vet_a[i]==0){
                tot_b++;
           }
            else if(vet_b[i] != 0 && vet_a[i] == vet_b[i]){
                continue;
            }
        }

        if(tot_a < tot_b){
            printf("%d\n",tot_a);
        }
        else{
            printf("%d\n",tot_b);
        }

    }

}
