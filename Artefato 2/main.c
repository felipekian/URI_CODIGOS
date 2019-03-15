#include <stdio.h>
#include <stdlib.h>

void Instrucoes(){
    system("cls");
    printf("                  Bem-Vindo!\n\n");
    printf("siga as instrucoes:\n");
    printf("1 - aperte entre para abrir o local para colar o arquivo .txt\n");
    printf("2 - renomei o arquivo para original.txt\n");
    printf("\nprocessando....\n\n");
    system("pause");

}

void Menu(){
    system("cls");
    int opcao;
    printf("     Bem-Vindo!\n\n");
    printf("Escolha a opcao desejada:\n");
    printf("1 - inserir o arquivo .txt \n");
    printf("2 - sair.\n");
    printf("\n\nDigite a opcao: ");
    scanf("%d",&opcao);
    testa(opcao);
}

void testa(int opcao){
    system("cls");
    switch(opcao){
    case 1:
        Instrucoes();
        break;
    case 2:
        printf("Desligando...\n");
        system("pause");
        return 0;
    default:
        printf("Opcao invalida voce digitou %d....\n\n",opcao);
        system("pause");
        Menu();

    }
}

int main(){
    Menu();
}
