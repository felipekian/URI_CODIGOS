#include <stdio.h>
#include <stdlib.h>
#define TAM_MAX 4

int valores[TAM_MAX];
int primeiro;
int ultimo;
int total;

void Fila_construtor(){
    primeiro =0;
    ultimo = 0;
    total =0;
}

void inserir(int e){
    if(fila_cheia()==1){
        printf("Fila Cheia!\n");
    }else{
    valores[ultimo] = e;
    ultimo = (ultimo +1) % TAM_MAX;
    total++;
}}

int retirar(){
    if(fila_vazia()==1){
        printf("Fila Vazia!\n");
    }else{
    int e = valores[primeiro];
    primeiro = (primeiro + 1) % TAM_MAX;
    total--;
    return e;
}}

int fila_cheia(){
   if(total == TAM_MAX - 1){
    return 1;
   }
   else{
    return 0;
   }
}

int fila_vazia(){
    if(total == 0){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){




}
