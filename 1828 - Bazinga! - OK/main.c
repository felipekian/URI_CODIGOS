#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int T,i;
    char s[15];
    char r[15];

    char R[] = "Raj trapaceou!";
    char S[] = "Bazinga!";
    char E[] = "De novo!";
    scanf("%d", &T);
    for(i=1; i<=T; i++) {
        scanf("%s",&s);
        scanf("%s",&r);

        if(!strcmp(s, "tesoura") && !strcmp(r, "papel")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r,"tesoura") && !strcmp(s,"papel")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "papel") && !strcmp( r, "pedra")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "papel") && !strcmp(s, "pedra")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "pedra") && !strcmp(r, "lagarto")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "pedra") && !strcmp(s, "lagarto")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "lagarto") && !strcmp(r, "Spock")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r,"lagarto") && !strcmp(s, "Spock")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "Spock") && !strcmp(r, "tesoura")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r,"Spock") && !strcmp(s, "tesoura")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "tesoura") && !strcmp(r, "lagarto")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "tesoura") && !strcmp(s, "lagarto")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "lagarto") && !strcmp(r, "papel")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "lagarto") && !strcmp(s, "papel")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "papel") && !strcmp(r, "Spock")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "papel") && !strcmp(s, "Spock")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "Spock") && !strcmp(r, "pedra")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "Spock") && !strcmp(s, "pedra")) {
            printf("Caso #%d: %s\n",i,R);
        } else if(!strcmp(s, "pedra") && !strcmp(r, "tesoura")) {
            printf("Caso #%d: %s\n",i,S);
        } else if(!strcmp(r, "pedra") && !strcmp(s, "tesoura")) {
            printf("Caso #%d: %s\n",i,R);
        } else {
            printf("Caso #%d: %s\n",i,E);
        }
    }
}
