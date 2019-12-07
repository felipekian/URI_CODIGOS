#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista*prox;
};

typedef struct lista LISTA;

LISTA * Criar_LISTA(){
    return NULL;
}

LISTA * Inserir_LISTA(LISTA*l , int i){
    LISTA*novo = (LISTA*) malloc(sizeof(LISTA));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void Imprime_LISTA(LISTA*l){
    LISTA*p;

    for(p=l ; p!= NULL ; p = p->prox){
        printf("info = %d\n",p->info);
    }
}

int LISTA_Vazia(LISTA*l){
    if(l==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

 LISTA * Buscar_na_LISTA(LISTA*l , int v){
    LISTA*p;
    for(p=l;p!=NULL;p=p->prox){
        if(p->info==v){
            return p;
        }
    }
    return NULL;
}

LISTA * Retira_Elemento_LISTA(LISTA*l , int v){
    LISTA*ant =NULL;
    LISTA*p=l;
    while(p!=NULL && p->info != v){
        ant = p;
        p = p->prox;
    }

    if(p== NULL){
        return l;
    }
    else{
        ant->prox = p->prox;
    }
    free(p);
    return l;
}

void Liberar_LISTA(LISTA*l){
    LISTA*p = l;
    while(p!=NULL){
        LISTA*t = p->prox;
        free(p);
        p=t;
    }
}


int main(){
    LISTA*l;
    LISTA*o;

    l= Criar_LISTA();
    l=Inserir_LISTA(l,23);
    l=Inserir_LISTA(l,41);
    l=Inserir_LISTA(l,35);
    l=Inserir_LISTA(l,345);

    o=Criar_LISTA();
    o=Inserir_LISTA(o,456);
    o=Inserir_LISTA(o,123);

    Imprime_LISTA(l);
    printf("\n\n");
    Imprime_LISTA(o);

    Liberar_LISTA(l);
    Liberar_LISTA(o);

}
