#include <stdio.h>
#include <stdlib.h>

int main(){

    int a , b, c;

    while(scanf("%d %d",&a,&b)){
        if(a==0 && b==0){
                return 0;
        }

        c = 2 * a - b;
        printf("%d\n",c);
    }
}
