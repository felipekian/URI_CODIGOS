#include<stdio.h>
#include<math.h>
int main(void){
    unsigned long int n, raiz, x ,i,i2;
    scanf("%d",&n);
    for(;n>=1;n--){
        scanf("%llu",&x);
        raiz = ceil(sqrt(x));
        unsigned long int numeros[x-1];

        //criando a lista de numero
        for(i=0;i<x-1;i++) numeros[i]=i+2;
        //removendo nao primos
        for(i=0;i<=raiz;i++){
            if(numeros[i]!=0){
                for(i2=i+1;i2<x-1;i2++) if((numeros[i2]%numeros[i])==0 && numeros[i2]!=0)numeros[i2]= 0;
            }
        }
        if(numeros[x-2]==x) printf("Prime\n");
        else printf("Not prime\n");
    }
    return 0;
}
