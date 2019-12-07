#include <stdio.h>
#include <stdlib.h>

struct Pilha{
       unsigned long long int largura;
       unsigned  long long int altura;
       unsigned  long long int profundidade;
       unsigned  long long int vet_volume;
}p[10000000];



int main(){
    unsigned long long int n;

    scanf("%llu",&n);
    int i;

    for(i=0;i<n;i++){
        scanf("%llu %llu %llu",&p[i].largura,&p[i].altura,&p[i].profundidade);
    }
    int altura = 0;
    int area_base =0;
    int area1=0 , area2=0, area3=0;

    if(n==1){
        area1 = p[0].altura * p[0].largura;
        area2 = p[0].altura * p[0].profundidade;
        area3 = p[0].largura * p[0].profundidade;


        if(area1 <= area2 && area1 <= area3){
            printf("%d\n",p[0].profundidade);
        }
        else if(area2 <= area1 && area2 <= area3){
            printf("%d\n",p[0].largura);
        }
        else if(area3<=area1 && area3 <= area2){
            printf("%d\n",p[0].altura);
        }
    }

    else{

        for(i=0;i<n;i++){
            area1 = p[i].altura * p[i].largura;
            area2 = p[i].altura * p[i].profundidade;
            area3 = p[i].largura * p[i].profundidade;

        if(i==n-1 ){


        if(area1 <= area2 && area1 <= area3 && area1 < p[i-1].vet_volume){
                if(area1 <= p[i-1].vet_volume){

                    altura+=p[n-1].profundidade;
                }
        }
        else if(area2 <= area1 && area2 <= area3 && area2 < p[i-1].vet_volume){
                if(area2 <= p[i-1].vet_volume){

                    altura+=p[n-1].largura;
                }
        }
        else if(area3<=area1 && area3 <= area2 && area3 < p[i-1].vet_volume){
                if(area3 <= p[i-1].vet_volume){

                    altura+=p[n-1].altura;
            }
        }
        else {
                printf("-1\n");
                return 0;
        }

        }

           else if(i==0){

                if(area1 >= area2 && area1 >= area3){
                        p[i].vet_volume = area1;
                        altura+= p[i].profundidade;
                }
                else if(area2 >= area1 && area2 >= area3){
                     p[i].vet_volume = area2;
                     altura+= p[i].largura;
                }
                else if(area3 >= area1 && area3 >= area2){
                      p[i].vet_volume = area3;
                      altura+= p[i].altura;
                }

            }
            else if(i > 0){

                if(area1 >= area2 && area1 >= area3){
                        if(area1 <= p[i-1].vet_volume){
                            p[i].vet_volume = area1;
                            altura += p[i].profundidade;
                        }else if(area2 <= p[i-1].vet_volume){
                            p[i].vet_volume = area2;
                            altura+=p[i].largura;
                        }
                        else if(area3 <= p[i-1].vet_volume){
                            p[i].vet_volume = area3;
                            altura+= p[i].altura;
                        }
                        else{
                            printf("-1\n");
                            return 0;
                        }
                }

                else if(area2 >= area1 && area2 >= area3){
                        if(area2 <= p[i-1].vet_volume){
                            p[i].vet_volume = area2;
                            altura += p[i].largura;
                        }else if(area1 <=  p[i-1].vet_volume){
                            p[i].vet_volume = area1;
                            altura+=p[i].profundidade;
                        }else if(area3 <= p[i-1].vet_volume){
                            p[i].vet_volume = area3;
                            altura+= p[i].altura;
                        }
                        else{
                            printf("-1\n");
                            return 0;
                        }
                }
                else if(area3 >= area1 && area3 >= area2){
                    if(area3 <= p[i-1].vet_volume){
                        p[i].vet_volume = area3;
                        altura += altura;
                    }
                    else if(area1 <=  p[i-1].vet_volume){
                        p[i].vet_volume = area1;
                        altura+=p[i].profundidade;
                    }else if(area2 <= p[i-1].vet_volume){
                        p[i].vet_volume = area2;
                        altura += p[i].largura;
                    }else{
                        printf("-1\n");
                        return 0;
                    }

                }

            }
        }


        printf("%d\n",altura);
        return 0;
    }

}
