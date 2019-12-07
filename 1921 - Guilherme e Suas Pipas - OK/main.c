#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int r=0, aux=0,a;
int i;
    scanf("%lld",&a);
if (a==3) {
        printf("0\n");
}
else if (a==4){

 printf("2\n");
}
else{
   for ( i=2; i<a-1; i++){
      r=aux+i;
      aux=r;
   }
printf("%lld\n", aux);
}
return 0;
}

