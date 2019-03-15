#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,u=0;

    while(scanf("%d",&n)!=EOF){


        int Matriz[n-2][n];

        int i,j;
        int vem = (n/2)+1;
        int vai = (n/2)+1;

        for(i=0; i<n ;i++){
            for(j=0;j<=n;j++){

                if(j>=vem && j<=vai){
                    printf("*");
                    }
                else if(j<vem){
                    printf(" ");
                }

        }
        printf("\n");
        if(vai==n){
            break;
        }
        vem--;
        vai++;

            }
            vem=(n/2)+1;
            vai=(n/2)+1;



             if(n==3){
                    for(i=0;i<2;i++){
                for(j=0;j<=n;j++){
                    if(j>=vem && j<=vai){
                    printf("*");
                    }
                else if(j<vem){
                    printf(" ");
                }
                }
                printf("\n");
                vem--;vai++;

            }
            printf("\n");
            }
            else{
                for(i=0;i<2;i++){
                for(j=0;j<=n;j++){
                    if(j>=vem && j<=vai){
                    printf("*");
                    }
                else if(j<vem){
                    printf(" ");
                }
                }
                printf("\n");
                vem--;vai++;

            }
            printf("\n");
                }

    }
}
