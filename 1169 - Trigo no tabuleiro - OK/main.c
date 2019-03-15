#include <stdio.h>
#include <math.h>
int main() {
    int n,i;
    scanf("%d",&n);
    for(i=0; i<n; i++) {
        int s;
        unsigned long long int g,M;
        scanf("%d",&s);
        setbuf(stdin,NULL);
        g=pow(2,s)-1;
        M=(g/12.0)/1000;
        printf("%llu kg\n",M);
    }
    return 0;
}
