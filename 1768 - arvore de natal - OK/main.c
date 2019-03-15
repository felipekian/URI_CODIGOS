#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i, j, n, total = 0, passo=0;
    while(scanf("%d", &n) != EOF)
    {
         total = 0;
         for(i=1;i<n;i+=2) total++;
         passo = 0;
         for(i=0;i<=total;i++)
         {
            for(j=0;j<(n/2)+passo+1;j++)
            {
               if((j <= ((n/2) + passo)) && (j >= ((n/2) - passo)))
               {
                     //printf("+ %d ", ((n/2) + 1 + passo));
                     //printf("- %d\n", ((n/2) - 1 - passo));
                     printf("*");
               }
               else
               {
                   printf(" ");
               }
            }
            printf("\n");
            passo++;
         }
         for(i=0;i<=(n/2);i++)
         {
            if(i == ((n/2))) printf("*");
            else printf(" ");
         }
         printf("\n");
         for(i=0;i<=((n/2) + 1);i++)
         {
            if((i == ((n/2))) || (i == ((n/2) + 1)) || (i == ((n/2)-1))) printf("*");
            else printf(" ");
         }
         printf(".\n");
         printf(".\n");
    }

    return 0;
}
