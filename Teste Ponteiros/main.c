#include <stdio.h>
#include <stdlib.h>

int main(){

    int n[]={7,8,9};
    int *p;

    p=&n[0];

    p++;

    printf("Valor: %d  ",*p);
    (*p)++;
    printf("Valor: %d\n",*p);

}
