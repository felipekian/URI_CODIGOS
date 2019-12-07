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
    int g =0;
    if(Op == 'M') {

        for(x=11; x>6;x--) {
            g+=1;
            for(y=g; y<=(11-g);y++) {
                Result = (Result + M[x][y]);
            }
        }
        Result=Result/30;

    }  else {
        g=0;
        for(x=11; x>6;x--) {
            g+=1;
            for(y=g; y<=(11-g);y++) {
                Result = (Result + M[x][y]);
            }
        }
    }
    printf("%.1lf\n", Result);
    return 0;
}


