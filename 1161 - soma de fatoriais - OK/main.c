#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int A,B,soma,a ,b;

    while(scanf("%lld %lld",&a,&b)!= EOF){
        int i; A=1,B=1,soma=0;

        for(i=a;i>0;i--){

            A = A * i;
        }

        for(i=b;i>0;i--){

            B = B * i;
        }

        soma=A+B;

        printf("%lld\n",soma);

    }


}
