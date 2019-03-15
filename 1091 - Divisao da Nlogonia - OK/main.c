#include <stdio.h>

int main () {

    int K, M, N, X, Y, i;


    while(scanf("%d", &K)&& K!= 0){
    scanf("%d %d", &N, &M);

    for(i = 0; i < K; i++){
        scanf("%d", &X);
        scanf("%d", &Y);
        if(X == N || Y == M){
            printf("divisa\n");
        } else {
            if(X > N && Y > M){
                printf("NE\n");
            } else {
                if (X < N && Y > M){
                    printf("NO\n");
                } else {
                    if(X < N && Y < M){
                        printf("SO\n");
                    } else {
                        if (X > N && Y <M)
                            printf("SE\n");
                        }

                        }
                }
            }
    }
}
return 0;

}
