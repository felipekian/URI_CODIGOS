#include <stdio.h>
#define TAM 12

int main(void) {
    int i, n;
    double polin[TAM], deriv[TAM];
    printf("Grau do polinomio: ");
    scanf("%d", &n);
    if (n < TAM) {
        printf("Coeficientes do polinomio: ");
        for (i = n; i >= 0; i = i - 1) {
            scanf("%lf", &polin[i]);
            printf("%7.3lf", polin[i]);
        }
        printf("\n");
        printf("Coeficientes da derivada ");
        printf("do polinomio original: \n");
        for (i = n; i >= 1; i = i - 1) {
            deriv[i - 1] = polin[i] * i;
            printf("%7.3lf", deriv[i - 1]);
        }
        printf("\n");
    } else printf("Grau do polinomio muito elevado!");
    return 0;
}
