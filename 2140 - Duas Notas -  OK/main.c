#include <stdio.h>
#include <stdlib.h>
//se der limite essedido na execução... dividir por faixa de valores tipo 10-50 , 50 - 100 , ....;
int main() {

    int total, pagamento;
    while(scanf("%d %d",&total,&pagamento)&& total != 0 && pagamento != 0 ) {

        int troco = pagamento - total;


        if(troco==4 || troco==7 || troco==12 || troco==22 || troco==52 || troco==102) {
            printf("possible\n");
        } else if(troco==10 || troco==15 || troco==25 || troco==55 || troco==105) {
            printf("possible\n");
        } else if(troco==20 || troco==30 || troco==60 || troco==110) {
            printf("possible\n");
        } else if(troco==40 || troco==70 || troco==120) {
            printf("possible\n");
        } else if(troco==100 || troco==150) {
            printf("possible\n");
        } else if(troco==200) {
            printf("possible\n");
        } else {
            printf("impossible\n");
        }
    }


}


