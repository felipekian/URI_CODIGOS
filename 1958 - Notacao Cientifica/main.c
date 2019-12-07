#include <stdio.h>
int main()
{
    long double X;
    scanf("%LE", &X);
    if(X>0){
            printf("+");
    }else(X<0){
        printf("-");
    }
    printf("%.4LE\n", X);
    return 0;
}
