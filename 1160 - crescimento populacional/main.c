#include <stdio.h>
#include <math.h>

int main(void){
    int t, i, anos=0;
    double g1, g2;
   long int pa, pb;

    scanf("%d", &t);

    i=0; while(i<t){
        scanf("%ld %ld %lf %lf", &pa, &pb, &g1, &g2);

            while(pa<=pb && anos<=100){
                pa=pa+floor(pa*(g1/100));
                pb=pb+floor(pb*(g2/100));
                anos++;
            }

        if(anos>100){
            printf("Mais de 1 seculo.\n");
        }else{
            printf("%d anos.\n", anos);
        }

        anos=0;

    i++;}
return(0);
}
