#include <stdio.h>
#include <stdlib.h>
int fib();
int uns =0;
int chamadas =0;
int main(){

    int n;
    scanf("%d",&n);
    int x;

    while(n--){
        scanf("%d",&x);

        if(x>=1 && x<=39){
            fib(x);
            printf("fib(%d) = %d calls = %d\n",x,chamadas-1,uns);

           uns=0;
           chamadas=0;
        }

    }

}

int fib(int x){

    if(x==0){
        chamadas++;
        return (0);
    }
    else if(x==1){
        uns++;
        chamadas++;
        return (1);
    }
    else{
        chamadas++;
        return (fib(x-1)+fib(x-2));
    }
}
