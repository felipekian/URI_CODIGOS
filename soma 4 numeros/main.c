#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int a , b , c ,d;
	a=0;
	b=a=c=d;
	printf("\nDigite os valores dos 4 numeros : ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	
	int resp = a + b + c + d;
	
	printf("\n\nValor da resposta : %d\n\n",resp);
	
	
	return 0;
}
