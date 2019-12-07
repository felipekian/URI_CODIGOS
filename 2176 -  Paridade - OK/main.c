#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){

    char par[999];

    gets(par);

    int i, soma =0;

    for(i=0;i<strlen(par);i++){
        if( par[i] == '1'){
           soma++;
        }
    }
    int tot = -38383;
    if( soma % 2 == 0){
            tot = 0;


        printf("%s%d\n",par,tot);
    }
    else{
            tot = 1;
        printf("%s%d\n",par,tot);
    }

}
