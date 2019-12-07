#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char nome[1200][150], aux[150];

	int i = 0;
    int ultimapalavra=0;
    int c;

	while(gets(nome[i])){
            setbuf(stdin, NULL);
            if(strcmp(nome[i],"EOF")==EOF){
                break;
            }

i++;
ultimapalavra++;
}
    int j;

 	for(j=1; j<ultimapalavra; j++)
 	{
 	strcpy(aux,nome[j]);
 	i = j-1;
 	while(i >= 0 && strcasecmp(nome[i], aux) > 0)
 	{
 	strcpy(nome[i+1],nome[i]);
 	i--;
 	}
 	strcpy(nome[i+1],aux);
 	}


 	printf("%s\n",nome[ultimapalavra-1]);

	return 0;
}
