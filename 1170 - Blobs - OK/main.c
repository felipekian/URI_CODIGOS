#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    scanf("%d",&n);
    while(n--){
        float v;
        scanf("%f",&v);
        int cont=0;
        while(v>1){
                if(v<=1 && v>0){
                    break;
                }
            v*=0.5;
            cont++;
        }
        printf("%d dias\n",cont);

    }

}
