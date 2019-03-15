#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int N;

    while(scanf("%d",&N)&& N!=0) {

        if(N>=0 && N<=15) {
            int Matriz[N][N];

            int i,j;
            int g=0,k=0;

            for(i=0; i<N; i++) {
                k=0;
                for(j=i; j<N+i; j++) {
                    int Q = pow(2,j);
                    Matriz[g][k]=Q;
                    k++;
                }
                g++;
            }
            int tamanho = Matriz[N-1][N-1];
            for(i=0; i<N; i++) {
                for(j=0; j<N; j++) {
                    if(tamanho < 10) {
                        if(j==N-1) {
                            printf("%1d",Matriz[i][j]);
                        } else
                            printf("%1d ",Matriz[i][j]);

                    } else if(tamanho > 9 && tamanho < 100) {
                        if(j==N-1) {
                            printf("%2d",Matriz[i][j]);
                        } else
                            printf("%2d ",Matriz[i][j]);

                    } else if(tamanho > 99 && tamanho < 1000) {
                        if(j==N-1) {
                            printf("%3d",Matriz[i][j]);
                        } else
                            printf("%3d ",Matriz[i][j]);

                    } else if(tamanho > 999 && tamanho < 10000) {
                        if(j==N-1) {
                            printf("%4d",Matriz[i][j]);
                        } else
                            printf("%4d ",Matriz[i][j]);

                    } else if(tamanho > 9999 && tamanho < 100000) {
                        if(j==N-1) {
                            printf("%5d",Matriz[i][j]);
                        } else
                            printf("%5d ",Matriz[i][j]);

                    } else if(tamanho > 99999 && tamanho < 1000000) {
                        if(j==N-1) {
                            printf("%6d",Matriz[i][j]);
                        } else
                            printf("%6d ",Matriz[i][j]);

                    } else if(tamanho > 999999 && tamanho < 10000000) {
                        if(j==N-1) {
                            printf("%7d",Matriz[i][j]);
                        } else
                            printf("%7d ",Matriz[i][j]);

                    } else if(tamanho > 9999999 && tamanho < 100000000) {
                        if(j==N-1) {
                            printf("%8d",Matriz[i][j]);
                        } else
                            printf("%8d ",Matriz[i][j]);

                    } else if(tamanho > 99999999 && tamanho < 1000000000) {
                        if(j==N-1) {
                            printf("%9d",Matriz[i][j]);
                        } else
                            printf("%9d ",Matriz[i][j]);

                    } else if(tamanho > 999999999 && tamanho < 10000000000) {
                        if(j==N-1) {
                            printf("%10d",Matriz[i][j]);
                        } else
                            printf("%10d ",Matriz[i][j]);
                    }
                }
                printf("\n");
            }
            printf("\n");
        }
    }
}
