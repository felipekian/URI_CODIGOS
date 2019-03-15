
typedef struct valores{
    int valor;
}Valores;

typedef struct elemento * Lista;

typedef struct elemento{
    struct elemento * ant , * prox;
    struct valores dados;
}Elemento;

Lista * li;

Lista * cria_lista();

void libera_lista(Lista*li);

int insere_lista_ordenado(Lista*li , struct Valores valor);

int remove_lista_inicio(Lista* li);

int remove_lista_final(Lista * li);

int remove_meio(Lista * li , int valor);
