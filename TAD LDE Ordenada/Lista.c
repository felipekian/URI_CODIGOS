#include <stdlib.h>
#include "Lista.h"

Lista * cria_lista(){
    Lista * li = (Lista*)malloc(sizeof(Lista));

    if(li == NULL){
        printf("Erro na Alocacao de memoria!\n");
        return;
    }
    *li = NULL;
    return li;
}

void libera_lista(Lista*li){
    if(li != NULL){
        Elemento * no;
        while((*li) != NULL){
            no = *li;
            *li = (*li)->prox;
            free(no);
        }
        free(li);
    }
}

int insere_lista_ordenado(Lista*li , struct Valores valor){
    if(li == NULL){
        return 0;
    }
    Elemento*no = (Elemento*)malloc(sizeof(Elemento));
    if(no == NULL){
        printf("Erro na alocacao de memoria!\n");
        return 0;
    }
    no->dados = receber;

    if(lista_vazia(li)){
        no->prox = NULL;
        no->ant = NULL;
        *li = no;
        return 1;
    }
    else{
        Elemento *ante, *atual = *li;

        while(atual != NULL && atual.dados < receber.valor){
                ante = atual;
                atual = atual->prox;
        }

        if(atual == *li){
            no->ant = NULL;
            (*li)->ant = no;
            no->prox = (*li);
            *li = no;
        }
        else{
            no->prox = ante->prox;
            no->ant = ante;
            ante->prox = no;
            if(atual != NULL){
                atual->ant = no;
            }

        }
        return 1;
    }

}

int remove_lista_inicio(Lista* li){
    if(li==NULL){
        return 0;
    }
    if((*li)==NULL){
        return 0;
    }

    Elemento*no = *li;
    *li = no->prox;
    if(no->prox != NULL){
        no->prox->ant = NULL;
    }

    free(no);
    return 1;
}

int remove_lista_final(Lista * li){
    if(li==NULL){
        return 0;
    }
    if((*li)==NULL){
        return 0;
    }

    Elemento * no = *li;
    while(no->prox != NULL){
        no=no->prox;
    }

    if(no->ant == NULL){
        *li = no->prox;
    }
    else{
        no->ant->prox = NULL;
    }
    free(no);
    return 1;
}

int remove_meio(Lista * li , int comparar){
    if(li == NULL){
        return 0;
    }

    Elemento*no = *li;
    while(no!=NULL && no->dados.valor != comparar){
        no = no->prox;
    }

    if(no == NULL){
        return 0;
    }
    if(no->ant == NULL){
        *li = no->prox;
    }else{
        no->ant->prox = no->prox;
    }

    if(no->prox != NULL){
        no->prox->ant = no->ant;
    }

    free(no);
    return 1;
}
