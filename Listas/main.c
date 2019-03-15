#include <stdio.h>
#include <stdlib.h>

struct lista{
    int info;
    struct lista*prox;

};
typedef struct lista Lista;

Lista* criar_lista(){
    return NULL;
}

Lista* Insere_lista(Lista* l , int i){
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = l;
    return novo;
}

void imprime_lista(Lista* l){
    Lista*p;
    for(p=l;p!=NULL;p=p->prox){
        printf("info = %d\n",p->info);
    }
}

int lista_vazia(Lista*l){
    if(l==NULL){
        return 1;
    }
    else{
        return 0;
    }
}

Lista* busca_lista(Lista*l , int v){
    Lista*p;
    for(p=l;p!=NULL;p=p->prox){
        return p;
    }
    return NULL;
}

Lista* Retira_lista(Lista*l , int v){
    Lista* ant = NULL;
    Lista* p = l;

    while(p!=NULL && p->info != v){
        ant = p;
        p=p->prox;
    }

    if(p==NULL){
        return 1;
    }

    if(ant==NULL){
        l = p->prox;
    }
    else{
        ant->prox = p->prox;
    }
    free(p);
    return 1;
}

void Libera_lista(Lista*l){
    Lista*p=l;
    while(p!=NULL){
        Lista* t = p->prox;
        free(p);
        p=t;
    }
}

Lista* insere_lista_ordenado(Lista*l , int v){
    Lista*novo;
    Lista*ant = NULL;
    Lista* p =l;

    while(p!=NULL && p->info < v){
        ant = p;
        p=p->prox;
    }

    novo = (Lista*) malloc(sizeof(Lista));
    novo ->info = v;

    if(ant == NULL){
        novo->prox = l;
        l = novo;
    }
    else{
        novo->prox = ant->prox;
        ant->prox = novo;
    }
    return l;
}

void lista_circular_imprime(Lista*l){
    Lista* p = l;
    if(p){
        do{
            printf("%d\n",p->info);
        }while(p!=l);

    }

}

int main(){



return 0;
}
