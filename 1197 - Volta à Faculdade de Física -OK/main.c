#include <stdio.h>
#include <stdlib.h>

int main(){
    int a , b;

    while(scanf("%d%d",&a,&b)!=EOF){
        setbuf(stdin,NULL);
        printf("%d\n",2*(a*b));
    }
}
