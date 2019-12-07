#include <stdio.h>
#include <stdlib.h>
#include "lista_dinamica.h"


struct elemento{
    struct aluno dados;
    struct elemento * prox;
};

typedef struct elemento Elem;

Lista* cria_lista(){
    Lista* li = (Lista*) malloc(sizeof(Lista));

    if(li != NULL){

        *li = NULL;

    }
    return li;
}

void libera_lista(Lista *li){

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

int lista_cheia(Lista *li){
    return 0;
}

int lista_vazia(Lista *li){

    if(li == NULL) return 1;
    if(*li == NULL) return 1;

    return 0;

}

int insere_lista_inicio(Lista * li ,  struct aluno al){
    if(li == NULL) return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;

    no->dados = al;
    no->prox = (*li);
    *li = no;
    return 1;
}

int insere_lista_final(Lista * li , struct aluno al){
    if(li == NULL) return 0;
    Elem *no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;

    no->dados = al;
    no->prox = NULL;

    if((*li) == NULL){
        *li = no;
    }else{
        Elem * aux = *li;
        while(aux->prox != NULL){
            aux = aux->prox;
        }
        aux->prox = no;
    }
    return 1;
}


int insere_lista_ordenado(Lista * li , struct aluno al){

    if(li == NULL) return 0;
    Elem*no = (Elem*) malloc(sizeof(Elem));
    if(no == NULL) return 0;

    no->dados = al;

    if(lista_vazia(li)){
        no->prox = (*li);
        *li = no;
        return 1;
    }
    else{
        Elem*ant , *atual = *li;
        while(atual != NULL && atual->dados.matricula < al.matricula){
            ant = atual;
            atual =atual->prox;
        }
        if(atual == *li){
            no->prox = (*li);
            *li = no;
        }else{
            no->prox =ant->prox;
            ant->prox = no;
        }
        return 1;
    }
}

int remove_inicio(Lista*li){

    if(li == NULL) return 0;

    if((*li) == NULL) return 0;

    Elem *no = *li;
    *li = no->prox;
    free(no);
    return 1;
}


int remove_final(Lista*li){

    if(li == NULL) return 0;

    if((*li) == NULL) return 0;

    Elem *ant ,*no = *li;

    while(no->prox != NULL){

        ant = no;
        no = no->prox;

    }

    if(no == (*li)){
        *li = no->prox;
    }else{
        ant->prox = no->prox;
    }

    free(no);

    return 1;
}

int remove_lista(Lista*li , int mat){

    if(li == NULL) return 0;

    Elem *ant, *no = *li;

    while(no != NULL && no->dados.matricula != mat){
        ant = no;
        no = no->prox;
    }

    if(no == NULL) return 0; // nao achou

    if(no == *li){ // remover o primeiro
        *li = no->prox;
    }else{

        ant->prox = no->prox;

    }

    free(no);

    return 1;
}


int consulta_lista_posicao(Lista * li , int posicao , struct aluno * al){

    if(li == NULL || posicao <=0) return 0;

    Elem*no = *li;

    int i = 1;

    while(no != NULL && i < posicao){
        no = no->prox;
        i++;
    }

    if(no == NULL){
        return 0;
    }else{

        *al = no->dados;
        return 1;
    }

}

int consulta_lista_matricula(Lista * li , int matricula , struct aluno * al){

    if(li == NULL) return 0;

    Elem *no = *li;

    while(no != NULL && no->dados.matricula != matricula){

        no = no->prox;

    }

    if(no == NULL){
        return 0;
    }else{
        *al = no->dados;
        return 1;
    }
}


