#include <stdlib.h>
#include <stdio.h>
#include "LDE.h"

struct elemento{
    struct elemento *ant , *prox;
    int matricula;
};

typedef struct elemento Elem;

Lista* cria_lista(){
    Lista * li = (Lista*)malloc(sizeof(Lista));
    if(li != NULL){
        *li = NULL;
    }
    return li;
}

void libera_lista(Lista* li){
    if(li != NULL){
        Elem * no;

        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

void Imprimir_lista(Lista* li){
    Elem*no = *li;
    int o = 0;
    while(no != NULL){
        int c = no->matricula;
        if(o==0){
            printf(" %d",c);
            o++;
        }else{
            printf(", %d",c);
        }
        no = no->prox;
    }
    printf(".");sta

}

int tamanho_lista(Lista* li){
    if(li == NULL) return 0;
    int cont = 0;
    Elem* no = *li;

    while(no != NULL){
        cont++;
        no = no->prox;
    }
    return cont;
}

int lista_cheia(Lista * li){
    return 0;
}

int lista_vazia(Lista * li){
    if(li == NULL) return 1;

    if(*li == NULL) return 1;

    return 0;
}

int insere_lista_ordenado(Lista* li ,int valor){
    if(li == NULL) return 0;

    Elem* no = (Elem*)malloc(sizeof(Elem));

    if(no == NULL) return 0;

    no->matricula = valor;

    if(lista_vazia(li)){
        no->prox = NULL;
        no->ant  = NULL;
        *li = no;
        return 1;
    }
    else{
        Elem *ante , *atual = *li;

        while(atual != NULL && atual->matricula < valor){
            ante = atual;
            atual = atual->prox;
        }

        if(atual == *li){
            no->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        }else{
            no->prox = ante->prox;
            no->ant = ante;
            ante->prox = no;

            if(atual != NULL)
                atual->ant = no;
        }
        return 1;
    }
}

int remover_elemento_inicio(Lista * li){
    if(li == NULL)  return 0;

    if((*li)==NULL) return 0;

    Elem*no = *li;
    *li = no->prox;

    if(no->prox != NULL)
        no->prox->ant = NULL;

    free(no);
    return 1;
}

int remover_elemento_final(Lista * li){
    if(li == NULL) return 0;

    if((*li) == NULL) return 0;

    Elem* no = *li;
    while(no->prox != NULL)
        no = no->prox;

    if(no->ant == NULL)
        *li = no->prox;
    else
        no->ant->prox = NULL;

    free(no);
    return 1;
}

int remover_elemento_desejado(Lista * li , int mat){
    if(li == NULL) return 0;
    Elem *no = *li;

    while(no != NULL && no->matricula != mat){
        no = no-> prox;
    }

    if(no == NULL) return 0;

    if(no->ant == NULL)
        *li = no->prox;
    else
        no->ant->prox = no->prox;

    if(no->prox != NULL)
        no->prox->ant = no->ant;

    free(no);
    return 1;
}

int consulta_lista_pos(Lista * li, int pos , int valor){

    if(li == NULL || pos <= 0) return 0;

    Elem* no = *li;
    int i = 1;

    while(no != NULL && i< pos){
        no = no->prox;
        i++;
    }

    if(no == NULL){
        return 0;
    }else{
        valor = no->matricula;
        return 1;
    }
}
