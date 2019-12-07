#ifndef LISTA_DINAMICA_H_INCLUDED
#define LISTA_DINAMICA_H_INCLUDED
#endif // LISTA_DINAMICA_H_INCLUDED


struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct elemento * Lista;


Lista* cria_lista();

void libera_lista(Lista *li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista *li);

int lista_vazia(Lista *li);

int insere_lista_inicio(Lista * li , struct aluno al);

int insere_lista_final(Lista * li , struct aluno al);

int insere_lista_ordenado(Lista * li , struct aluno al);

int remove_inicio(Lista*li);

int remove_final(Lista*li);

int remove_lista(Lista*li , int mat);

int consulta_lista_posicao(Lista * li , int posicao , struct aluno * al);

int consulta_lista_matricula(Lista * li , int matricula , struct aluno * al);

