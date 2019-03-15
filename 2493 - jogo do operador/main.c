#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void programa();
void Imprime(int nu);
void ultimo(char Nomes[] , int tot , int tot_n);
int n;

struct Op{
    char nome[20];
    char operador;
    int pri , seg , ter;
}OP[1000];


int main(){
    programa();

    return 0;
}

void programa(){
    while(scanf("%d",&n)!=EOF){
        int i;

       for(i=0;i<n;i++){
            scanf("%d %d=%d",&OP[i].pri,&OP[i].seg,&OP[i].ter);

        }
        getchar();
        for(i=0;i<n;i++){
            char palavra[20];
            char ope;
            int opcao = 0;

            scanf("%s %d %c",&palavra,&opcao,&ope);
            getchar();

            strcpy(OP[opcao-1].nome , palavra);
            //strcpy(OP[opcao-1].operador , ope);
            OP[opcao-1].operador = ope;

        }

        Imprime(n);
    }
}

void Imprime(int nu){
    int cont = 0;
    int i , resultado = 0 ,s = 0;
    char nomes[nu][15];
    for(i=0;i<nu;i++){

        if(OP[i].operador == '+'){
            printf("entrei +\n");
            if(OP[i].pri + OP[i].seg == OP[i].ter){
                    printf("entrei ++++\n");
                continue;
            }else{
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }

        }
        else if(OP[i].operador == '-'){
            printf("entrei -\n");
            if(OP[i].pri - OP[i].seg == OP[i].ter){
                     printf("entrei ---\n");
                continue;
            }else{
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }

        }
        else if(OP[i].operador == '*'){
                printf("entrei *\n");
            if(OP[i].pri * OP[i].seg == OP[i].ter){
                     printf("entrei ****n");
                continue;
            }else{
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }
        }
        else if( OP[i].operador == 'I'){
            printf("entrei I\n");
            if(OP[i].pri * OP[i].seg == OP[i].ter){
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }
            else if(OP[i].pri + OP[i].seg == OP[i].ter){
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }
            else if(OP[i].pri - OP[i].seg == OP[i].ter){
                strcpy(nomes[s] , OP[i].nome);
                s++;
            }
            else{
                continue;
            }

        }
    }
    ultimo(nomes , s , nu);
}

void ultimo(char Nomed[] , int tot , int tot_n){

    if(tot==0){
        printf("You Shall All Pass!\n");
    }else if(tot==tot_n){
        printf("None Shall Pass!\n");
    }else{
        int i , d = 0;
        for(i=0;i<tot;i++){
            if(d!=0){
                printf(" %s",Nomed[i]);
            }else{
                printf("%s",Nomed[i]);
            }
        }

    }
}
