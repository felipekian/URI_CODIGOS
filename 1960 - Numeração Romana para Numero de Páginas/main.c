#include <stdio.h>
#include <stdlib.h>

int main(){
    char *M[] = {"","M","MM","MMM"};
    char *C[] = {"C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char *D[]  = {"X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char *U[] = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};

    int n,a, l;

    scanf("%d",&n);

     a = n/1000;
    printf("%s",M[a]);

    n = n%1000;
    a = n/100;

    printf("%s",C[a]);

    n = n%100;
    a = n/10;

    printf("%s",D[a]);

    n = n%10;

    printf("%s\n",U[n]);


}
