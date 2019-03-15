#include <stdio.h>
#include <stdlib.h>

int main(){

    unsigned long long int a, b, i , soma =0, p =0,s=0 ,t=0;

    while(scanf("%llu %llu",&a,&b)!= EOF){
        soma =0 , p=0 , s=0,t=0;
        if(a < b){
                if(a%2==0)
                    a++;
                if(b%2==0)
                    b--;
            for(i=a;i<=b;i+=2){

                    p = i/1000000000;
                    soma+=p;
                    p = i%1000000000;
                    s = p/100000000;
                    soma+=s;
                    p = i%100000000;
                    s = p/10000000;
                    soma+=s;
                    p = i%10000000;
                    s = p/1000000;
                    soma+=s;
                    p = i%1000000;
                    s = p/100000;
                    soma+=s;
                    p = i%100000;
                    s = p/10000;
                    soma+=s;
                    p = i%10000;
                    s = p/1000;
                    soma+=s;
                    p = i%1000;
                    s = p/100;
                    soma+=s;
                    p = i%100;
                    s = p/10;
                    soma+=s;
                    s = p%10;
                    soma+=s;




            }
             printf("%llu\n",soma);
        }

       else if(a > b ){

                if(a%2==0)
                    a--;
                    if(b%2==0)
                        b++;

            for(i=b;i<=a;i+=2){

                    p = i/1000000000;
                    soma+=p;
                    p = i%1000000000;
                    s = p/100000000;
                    soma+=s;
                    p = i%100000000;
                    s = p/10000000;
                    soma+=s;
                    p = i%10000000;
                    s = p/1000000;
                    soma+=s;
                    p = i%1000000;
                    s = p/100000;
                    soma+=s;
                    p = i%100000;
                    s = p/10000;
                    soma+=s;
                    p = i%10000;
                    s = p/1000;
                    soma+=s;
                    p = i%1000;
                    s = p/100;
                    soma+=s;
                    p = i%100;
                    s = p/10;
                    soma+=s;
                    s = p%10;
                    soma+=s;





            }
             printf("%llu\n",soma);


        }
    }

}
