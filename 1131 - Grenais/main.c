#include <stdio.h>
#include <stdlib.h>

int main(){

    int vin=0, vg=0, i=0, cont=0, emp=0, vi =0, vp =0;

    while(i!=2)
    {
        scanf("%d", &vin);
        scanf("%d", &vg);
        if(vg>vin)
        {
            vp++;
        }

        if(vin==vg)
        {
            emp++;
        }
       if(vin>vg)
        {
            vi++;
        }
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &i);
        cont++;
    }
        printf("%d grenais\n", cont);
        printf("Inter:%d\n", vi);
        printf("Gremio:%d\n", vp);
        printf("Empates:%d\n", emp);


        if(vin<vg){
            printf("Gremio venceu mais\n");
        }

        if(vin>vg){
            printf("Inter venceu mais\n");
        }
         if(vin==vg){
            printf("Nao houve vencedor\n");
        }


}
