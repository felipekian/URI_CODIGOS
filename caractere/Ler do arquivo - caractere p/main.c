#include <stdio.h>

int main(void)
{

	//char url[]="poema.txt";
	char ch;
	FILE *arq;

    arq = fopen("c:\\Artefato_2\\Local_Arquivos\\original.txt","r");

	if(arq == NULL)
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	else
	    while( (ch=fgetc(arq))!= EOF ){
		//putchar(ch);
        printf("%c",ch);
	    }
	fclose(arq);

	return 0;
}
