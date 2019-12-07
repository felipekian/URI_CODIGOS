#include <stdio.h>
#include <stdlib.h>

double porcentagem(unsigned long long a , unsigned long long b){

        double resp =(double) b/a-1;
        return resp*100;

}

int main(){

    unsigned long long a , b;
    int cont = 0;
    while(scanf("%llu %llu",&a,&b)!= EOF){

        printf("Projeto %d:\nPercentual dos juros da aplicacao: %.2f %%\n",++cont,(double)porcentagem(a,b));

    }
    return 0;
}
