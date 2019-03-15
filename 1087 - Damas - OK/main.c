#include <stdio.h>
#include <math.h>
int main(){
   int X1, Y1, X2, Y2;

   scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
   while(X1!=0 && Y1!=0 && X2!=0 && Y2!=0){

      if(X1==X2 && Y1==Y2)
         printf("0\n");
      else if(X1==X2 || Y1==Y2 || pow((X1-X2),2)== pow((Y1-Y2),2) ){
         printf("1\n");}
      else
         printf("2\n");

      scanf("%d %d %d %d", &X1, &Y1, &X2, &Y2);
   }
   return 0;
}
