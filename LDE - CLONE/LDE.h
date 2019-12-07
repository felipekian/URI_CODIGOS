typedef struct elemento * Lista;

Lista* cria_lista();

void libera_lista(Lista* li);

int tamanho_lista(Lista* li);

int lista_cheia(Lista * li);

int lista_vazia(Lista * li);

int insere_lista_ordenado(Lista* li ,int valor);

int remover_elemento_inicio(Lista * li);

int remover_elemento_final(Lista * li);

int remover_elemento_desejado(Lista * li , int mat);

int consulta_lista_pos(Lista * li, int pos ,int valor);

void Imprimir_lista(Lista* li);
