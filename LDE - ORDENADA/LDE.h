
struct aluno{
    int matricula;
    char nome[30];
    float n1,n2,n3;
};

typedef struct elemento * Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista * li);

int lista_vazia(Lista * li);

int insere_lista_ordenado(Lista* li , struct aluno al);

int remover_elemento_inicio(Lista * li);

int remover_elemento_final(Lista * li);

int remover_elemento_desejado(Lista * li , int mat);

int consulta_lista_pos(Lista * li, int pos , struct aluno *al);
