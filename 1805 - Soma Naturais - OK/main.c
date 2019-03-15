#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned long long int a,b, soma=0;

    scanf("%lld%lld",&a,&b);

    soma = ((a+b)*(b-a +1))/2;

    printf("%lld\n",soma);


}
