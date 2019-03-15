#include <stdio.h>
#include <stdlib.h>
struct no {
    int info;
    struct no *esquerda, *direita; //direita = próximo elemento e esquerda = elemento anteriror
};

void menu();
void addinicio(struct no **lista, int valor); //inserir no inicio
void addfim(struct no **lista, int valor);
void imprimiresquerda(struct no *lista); //imprimir da direita para esquerda
void imprimirdireita(struct no *lista);
void remover(struct no **lista, int valor);
struct no *buscar(struct no *lista, int valor);

int main (int argc, char *argv) {
    struct no *lista, *p;
    int op, valor;

    lista = NULL; //lista nula

    do {
        system("CLS");
        menu();
        scanf("%d",&op);

        switch(op) {
        case 0:
            break;
        case 1: //inserir ni inicio
            addinicio(&lista, valor);
            break;
        case 2:
            addfim(&lista, valor);
            break;
        case 3: //imrpimir da esquerda para direita
            imprimiresquerda(lista);
            break;
        case 4:
            imprimirdireita(lista); //imprimir da direita para esquerda
            break;
        case 5:
            printf("\nBuscar Elemento: ");
            scanf("%d",&valor);
            printf("\nPonteiro: %p",buscar(lista,valor));
            break;
        case 6:
            remover(&lista, valor);
            break;
        default:
            printf("\nOpcao Invalida!\n");
            break;
        }
        getch();
    } while(op!=0);

    while(lista!=NULL) { //liberando memória
        p = lista;
        lista = lista->direita;
        free(p);
    }
}
//--------------------------------------------------------------------------------------------------
void addinicio(struct no **lista, int valor) { //adicionar no inicio da lista
    struct no *p; //auxiliar

    printf("\nValor do Elemento: ");
    scanf("%d",&valor);

    if((p = malloc(sizeof(struct no))) == NULL) { //erro
        printf("\nMemory Failure");
    } else {
        p->info = valor; //recebendo valor
        p->esquerda = NULL; //esquerda é nulo pois a inseção é no inicio
        p->direita = *lista; //direita recebe a lista

        if(*lista != NULL) { //se a lista não for nula então a esquerda recebe o valor
            (*lista)->esquerda = p;
        } //não pode ter um else, pois se não for nulo, ou insere na esquerda, ou a lista recebe o valor
        *lista = p; //lista recebe valor da direita
    }
}
void addfim(struct no **lista, int valor) { //inserir no fim da lista
    struct no *pNow, *pNavegar; //ponteiro de navegação

    printf("\nValor do Elemento: ");
    scanf("%d",&valor);

    pNavegar = *lista; //navegação recebe a lista

    if((pNow = malloc(sizeof(struct no))) == NULL) { //erro
        printf("\nMemory Failure\n");
    } else {
        //para conter algum valor
        pNow->info = valor; //recebe valor
        pNow->direita = NULL; //direita e esquerda são nulos
        pNow->esquerda = NULL;
        if(*lista == NULL) { //lista vazia
            *lista = pNow;
        } else {
            while(pNavegar->direita != NULL) { //navegar paraa o último elemento para inserir no fim
                pNavegar = pNavegar->direita;
            }

            pNavegar->direita = pNow; //o ultimo elemento recebe o valor (direita e esquerda do pNow continuam nulos)
            pNow->esquerda = pNavegar; //valor da esquerda recebe o valor contido acima e insere no fim
        }
    }
}
//--------------------------------------------------------------------------------------------------------
void imprimiresquerda(struct no *lista) { //imprimir da esquerda para direita
    struct no *p;
    p = lista;
    if(p == NULL) { //lista nula, lista vazia
        printf("\nLista Vazia");
    } else {
        while(p!=NULL) { //enquanto a lista não for nula
            printf("\nElemento: %d\n",p->info); //imprime o elemento
            p = p->direita; //passa para o próximo regitro
        }
    }
}
//---------------------------------------------------------------------------------------------
void imprimirdireita(struct no *lista) { //imprimir da direita para esquerda
    struct no *p;
    p=lista;
    if(lista == NULL) { //lista vazia
        printf("\nLista Vazia\n");
    } else {
        while(p->direita != NULL) { //enquanto o elemento da direita não for nulo
            p = p->direita; //p passa para o próximo elemento
        }

        while(p != NULL) { //enquanto não houver objetos nulos, da direita
            printf("\nElemento: %d\n",p->info);
            p = p->esquerda; //o ponteiro volta imprimindo
        }
    }
}
//-----------------------------------------------------------------------------------------
struct no *buscar(struct no *lista, int valor) { //função passada para buscar, e retornar ponteiro
    struct no *retorno; //ponteiro de retorno

    int encontrou = 0;
    retorno = NULL; //se não encontrar então retorno é nulo
    while(lista != NULL) { //enquanto a lista não for nula
        if((lista->info) == valor) { //se valor digitado for encotnrado
            retorno = lista;  //retorno recebe a lista, para retornar ponteiro
            encontrou = 1;
            break;
        }
        lista = lista->direita; //próximo elemento
    }
    if(encontrou == 1) { //encontrou
        printf("\nElemento Encontrado com Sucesso!\n");
    } else { //nao encontrou
        printf("\nElemento digitado %c inv%clido!\n",130,160);
    }
    return retorno;//retorno do ponteiro
}
//------------------------------------------------------------------------------------------
void remover(struct no **lista, int valor) { //remover elemento desejado
    struct no *p,*aux;//auxiliar
    int encontrou = 0;
    p = *lista;

    printf("\nValor a Ser Removido: ");
    scanf("%d",&valor);

    aux = buscar(*lista, valor);//chamando função de busca

    if(*lista == NULL) { //lista vazia
        printf("\nLista Vazia\n");
    } else {
        if(aux != NULL) { //se a lista não for nula
            if(aux->direita != NULL) { //se no valor digitado a direita não for nula
                aux->direita->esquerda = aux->esquerda; //aux direita e esquerdqa recebe o valor da esquerda
            }
            if(aux->esquerda != NULL) { //e se a esquerda não for nula
                aux->esquerda->direita = aux->direita; //aux esquerda e direita recebe o valor da direita
            } else { //se os 2 forem nulos
                *lista = aux->direita;
            }
            free(aux);
            encontrou = 1;
        }

        if(encontrou == 1) { //mensagem
            printf("\nElemento removido com Sucesso!\n");
        } else {
            printf("\nElemento nao Encontrado\n");
        }
    }
}
//----------------------------------------------------------------------------
void menu() { //menu
    printf("\n1) Inserir Inicio");
    printf("\n2) Inserir no Fim");
    printf("\n3) Imprimir da Esquerda para Direita");
    printf("\n4) Imprimir da Direita para Esquerda");
    printf("\n5) Buscar um Elemento e Exibir Ponteiro");
    printf("\n6) Remover Elemento Desejado");
    printf("\n\n0) Sair: ");
}
