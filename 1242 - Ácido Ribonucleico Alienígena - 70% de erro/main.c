#include <stdio.h>
#include <string.h>
    int main (){
        char a[1000];
        int b, c, d, e, v=0;
        int RR=0, aux1, Cont_Tot, f=1, aux12;

        while (scanf("%s", a)!=EOF){

            b=0;
            Cont_Tot=0;
            v=0;
            f=0;
            d=strlen(a);
            int g;
             for ( g=0; g<strlen(a)-1; g++){
                for (e=0; e<strlen(a); e++){
                        if (a[e]=='S' && v==0){
                             a[e]='1';
                            v++;
                            aux1=e;
                            break;
                        }
                        else if (a[e]=='F' && f==0){
                             a[e]='1';
                            f++;
                            aux12=e;
                            break;
                        }
                        else if (a[e]=='C' && f!=0 &&  aux12%2!=e%2){
                            a[e]='1';
                            Cont_Tot++;
                            f=0;
                            aux12=e;
                            break;
                        }
                        else if (a[e]=='B' && v==1 && aux1%2!=e%2){
                                a[e]='1';
                                v=0;
                                Cont_Tot++;
                                break;
                            }
                }

         }
                printf ("%d\n", Cont_Tot);
                Cont_Tot=0;
           }



        }
