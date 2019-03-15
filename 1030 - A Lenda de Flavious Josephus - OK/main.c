#include <stdio.h>
#include <stdlib.h>
int f (int n, int k){

    if(n==1){
        return 1;
    }
    else {
    return (((f(n-1, k) + k-1)%n)+1);
    }

    }

int main(){
    int n= 0 , i=1;

    scanf("%d",&n);

    while(n--){

    int n=0 , k=0 ;

    scanf("%d %d",&n,&k);

    printf("Case %d: %d\n",i,f(n , k));
    i++;

    }
}
