#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void hanoi(int n, char a, char b, char c) {
    /* passar n discos da aste A para a aste B usando
     * a aste C como intermediário(auxiliar)
     */
    if (n == 1)
        printf("mova disco %d de %c para %c\n", n, a, b);
    else {
        hanoi(n - 1, a, c, b);
        printf("mova disco %d de %c para %c\n", n, a, b);
        hanoi(n - 1, c, b, a);
    }
}

int main(void) {
    setlocale(LC_ALL,"Portuguese");

    printf("Digite o número de discos da Torre de Hanoi: ");
    int Discos;
    scanf("%d", &Discos);
    hanoi(Discos, 'A', 'B', 'C');
    return 0;
}
