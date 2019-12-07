#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;

    scanf("%d",&n);

    while(n--){
        int i;
        float x, g[7];
        char nome[101];
        float menor =0, maior =0;
        float soma =0;
        getchar();
        gets(nome);
        scanf("%f",&x);
        for(i=0;i<7;i++){
            scanf("%f",&g[i]);
        }
        menor=g[0];
        maior=g[0];
        for(i=1;i<7;i++){
            if(g[i]>maior){
                maior=g[i];
            }
            else if(g[i]<menor){
                menor=g[i];
            }
        }

        for(i=0;i<7;i++){
            if(g[i]==maior || g[i]==menor){
                continue;
            }
            else{
                soma+=g[i];
            }
        }

        printf("%s %.2f\n",nome,soma*x);

    }

}
