#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
    int n;

    while(scanf("%d",&n)){
        setbuf(stdin,NULL);
        if(n==0){
            printf("0\n");
            return 0;
        }
        char recebe[30];

        itoa(n,recebe,32);

        strupr(recebe);

        printf("%s\n",recebe);

        strcpy(recebe,"");
    }
    return 0;

}
