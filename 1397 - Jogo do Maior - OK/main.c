#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    while(scanf("%d",&n)&& n!=0){

        int a , b ,i,contA =0 , ContB=0;

        for(i=0;i<n;i++){

        scanf("%d %d",&a,&b);
                if(a==b){
                    continue;
                }
                else if(a>b){
                    contA++;
                }
                else{
                    ContB++;
                }

        }
            printf("%d %d\n",contA,ContB);

    }

}
