#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main()
{
   char frase[1000];
   int i, j, cont=0, cont2=0, n;

   scanf("%i",&n);
   getchar();
for(i=0;i<n;i++){
   char crip[1000]="daniel";
   cont=0;
   cont2=0;

   gets(frase);

   while(frase[cont] != '\0'){
      if(frase[cont]>=65 && frase[cont]<=90 || frase[cont]>=97 && frase[cont]<=122){
         frase[cont]+=3;
      }
      cont++;
      cont2++;
   }
   cont=0;
   while(frase[cont] != '\0'){
      crip[cont]=frase[cont2-cont-1];
      cont++;
   }

   cont=cont2/2.0;
   while(frase[cont] != '\0'){
      crip[cont]-=1;
      cont++;
   }

   printf("%s\n",crip);

}



   system("pause");
   return 0;
}
