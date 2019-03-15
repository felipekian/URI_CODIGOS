#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){

    int D, VF, VG;


    while(scanf("%d %d %d",&D,&VF,&VG)!=EOF){
        setbuf(stdin,NULL);

        double v2 = (double)    D*D+VF*VF;
        double val= (double)    sqrt(v2);
        double t1 = (double)    12.0 / VF;
        double t2 = (double)    val/VG;
        if(t1>t2)
            printf("S\n");
        else
            printf("N\n");


        }
       return 0;
    }


