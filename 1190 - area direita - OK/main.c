#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main() {
    double M[12][12];
    double Result;
    Result =0;
    int  x, y;
    char Op;
    scanf("%c", &Op);
    for(x=0; x<12; x++)
        for(y=0; y<12; y++) {
            scanf("%lf", &M[x][y]);
        }
    int g =12;
    int k = 6;
    if(Op == 'M') {

        for(x=1; x<=5;x++) {
            g--;
            for(y=g; y<12;y++) {
                Result = (Result + M[x][y]);
            }
        }
        for(x=6;x<11;x++){
                k++;
            for(y=k;y<12;y++){
                Result = (Result + M[x][y]);
            }
        }

        Result=Result/30;

    }
    else {
        g=12;k=6;
        for(x=1; x<=5;x++) {
            g--;
            for(y=g; y<12;y++) {
                Result = (Result + M[x][y]);
            }
        }
        for(x=6;x<11;x++){
                k++;
            for(y=k;y<12;y++){
                Result = (Result + M[x][y]);
            }
        }

    }
    printf("%.1lf\n", Result);
    return 0;
}


