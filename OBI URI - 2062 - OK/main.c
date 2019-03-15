#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int N,i;
    scanf("%d",&N);

    char nome[N][20];

    char URI();
    char OBI();

    for(i=0;i<N;i++){

        scanf("%s",&nome[i]);
        if(strlen(nome[i])<4){
        URI(nome[i]);
        OBI(nome[i]);
        }
        else{
            continue;
        }

    }

    for(i=0;i<N;i++){
        printf("%s",nome[i]);
       if(i<N-1){
            printf(" ");
        }
    }
    printf("\n");

    //fim do programa
}

char OBI(char * p){

int soma =0;
if(strlen(p)<=3){

 if(p[0]=='O'){
    soma++;
 }
 if(p[1]=='B'){
    soma++;
 }
 if(soma==2){
    strcpy(p,"OBI");
 }
 return p;
}}

char URI(char * p){

int soma =0;

if(strlen(p)<=3){

 if(p[0]=='U'){
    soma++;
 }
 if(p[1]=='R'){
    soma++;
 }
 if(soma==2){
    strcpy(p,"URI");
 }
 return p;
}}



