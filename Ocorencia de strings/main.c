#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int procuraString(char string1[], char string2[]){
int length = strlen(string2);
char *ptr;
int i;
char copy[100]; /* vector auxiliar para comparar*/

for(i = 0; i<length;i++){
	ptr=strchr(string1,string2[i]); /* obtem a primeira ocorrencia do primeiro caracter da string2 na string1 */
	copy[i]= *ptr;/* coloca-se no primeiro caracter de copy o caracter apontado por ptr*/
}
copy[length] = '\0';/* colocar o caracter fim de string no array copy*/
if(!strcmp(copy,string2)){/* se o array copy for igual a string que queriamos encontrar entao devolvemos TRUE */
	printf("String found = %s\n",copy);

}
else{ printf("String not found\n");
	  return 0;/* caso contrario retornamos FALSE */
}
}

int main(){

    char palavra[] = "me";
    char texto[] = "quero me me dar de mal meu";
    int resp;
   resp =  procuraString(texto,palavra);

   if(resp==1){
    printf("tem..");
   }
   else{
    printf("Nao tem..");
   }

}
