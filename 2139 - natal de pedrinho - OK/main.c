#include <stdio.h>
#include <stdlib.h>

int main(){

    int dias_ate_natal = 360;
    int mes, dia;

    int vet_mes[13] = {0 ,31 , 29 , 31, 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 24};

    while(scanf("%d %d",&mes, &dia)!= EOF){
        setbuf(stdin,NULL);

        if(mes==12 && dia==25){
            printf("E natal!\n");
        }

        else if(mes==12 && dia>25){
            printf("Ja passou!\n");
        }

        else if(mes==12 && dia==24){
            printf("E vespera de natal!\n");
        }

        else{

            int i, soma_tot_dias_para_natal =0;

            for(i = mes ; i < 13 ; i++){
                soma_tot_dias_para_natal+=vet_mes[i];
            }

             printf("Faltam %d dias para o natal!\n", soma_tot_dias_para_natal - dia + 1);

        }
    }

    return 0;
}
