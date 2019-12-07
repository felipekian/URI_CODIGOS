#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void teste();
int main() {
    int k =0;
    char frase[101];
    char maior[101]= {"0"};

    while(gets(frase)) {

        if(strcmp(frase,"0")==0) {
            if(k>0) {
                printf("\nThe biggest word: %s\n",maior);
            }
            break;
        }

        teste(frase, maior);
        k++;
    }

}

void teste(char * p, char * maior) {

    int tamanho =0,i,j=0,z=0,q,l=0;
    char aux[101]= {"a"};


    for(i=0; i<=strlen(p)+1; i++) {



        if(p[i]!=' ' && p[i]!='\0') {
            aux[j]=p[i];

            tamanho++;
            j++;

        }
//ver quem é maior: demorei 5 dias só para essa formatação PQP//
        if(p[i]==' ' || p[i]=='\0') {

            if(tamanho>=strlen(maior)) {

                for(l=0; l<tamanho; l++) {
                    maior[l]=aux[l];
                }

            }


        }


//tudo certo tem baixo
        if(p[i]==' ') {

            if(z==0) {
                z++;
                printf("%d",tamanho);



                tamanho=0;
                j=0;


            }

            else {
                printf("-%d",tamanho);


                tamanho=0;
                j=0;
            }
        }

        else if(p[i]=='\0') {
            if(z==0) {

                printf("%d\n",tamanho);
                break;




            }

            else if(z!=0) {
                printf("-%d\n",tamanho);
                break;



            }

        }


    }
}



