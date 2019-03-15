#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int a , b;

    while(scanf("%llu %llu",&a,&b)!=EOF){
    setbuf(stdin,NULL);
        if(b>a)
            printf("%llu\n",b-a);
        else
            printf("%llu\n",a-b);
    }
    return 0;
}
