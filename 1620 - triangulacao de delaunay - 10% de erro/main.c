#include<stdio.h>
#include <stdlib.h>
int main(){
   unsigned long long I,aux,L;
   double Result;

   while (scanf ("%llu",&L)&& L!=0){
        setbuf(stdin,NULL);
        aux=L-3;
        I=aux+L;
       Result=(I-L)/(double)L;

       printf("%.6lf\n",Result);
   }
return 0;
}
