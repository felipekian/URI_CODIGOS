#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
   char frase[5000];
   int aux,i;

   while(gets(frase)!=EOF){
      aux=strlen(frase);
      int p =aux;
      for(i=0;i<aux;i++){
         if(((frase[i]>='a') && (frase[i]<='m')) || ((frase[i]>='A') && (frase[i]<='M'))  )
            frase[i]=frase[i]+13;

         else{
            if( ((frase[i]>='n') && (frase[i]<='z')) || ((frase[i]>='N') && (frase[i]<='Z')))
            frase[i]=frase[i]-13;
         }
      }
      frase[p] = '\0';
      printf("%s\n",frase);

   }
   return 0;
}
