#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 1000

int elementos[MAX_TAM];
int TOPO;

void Pilha_Contrutor(){
    TOPO = -1;
}


void Push(int e){
    if(Pilha_cheia()==1){
        printf("Pilha Cheia!\n");
        exit(1);
    }
    TOPO++;
    elementos[TOPO] = e;

}

int Pop(){
    if(Pilha_vazia()==1){
        printf("Pilha Vazia!\n");
        exit(1);
    }
    int e;
    e = elementos[TOPO];
    TOPO--;
    return e;

}

int Pilha_vazia(){
    if(TOPO == -1){
        return 1;
    }
    else{
        return 0;
    }

}
int Pilha_cheia(){
    if(TOPO == MAX_TAM -1){
        return 1;
    }
    else{
        return 0;
    }
}

int top(){
    return elementos[TOPO];
}

int main(){


}
