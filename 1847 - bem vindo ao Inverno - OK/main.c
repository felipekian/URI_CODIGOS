#include <stdio.h>
#include <stdlib.h>

int main(){

    int a,b,c;

    scanf("%d%d%d",&a,&b,&c);
    if(b==a && c==a){
        printf(":(\n");
    }
    else if(a>b && b<=c){
        printf(":)\n");
    }
    else if(a<b && b>=c){
        printf(":(\n");
    }
    else if(a<b && b<c && (b-a)>(c-b)){
        printf(":(\n");
    }
    else if(a<b && b>c && (b-a)<=(c-b)){
        printf(":)\n");
    }
    else if(a>b && b>c && (a-b)>(b-c)){
        printf(":)\n");
    }
    else if(a>b && b>c && (a-b)<=(b-c)){
        printf(":(\n");
    }
    else if(a==b && b>c){
        printf(":(\n");
    }
    else if(a==b && b<c){
        printf(":)\n");
    }
    else{
        printf(":)\n");
    }
    return 0;
}
