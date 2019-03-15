#include <stdio.h>
#include <stdlib.h>

int main(){

    int MinutoInicio,MinutoTermino,HoraInicio,HoraTermino,TotalMinutos,TotalHoras=0;

    scanf("%d%d%d%d",&HoraInicio,&MinutoInicio,&HoraTermino,&MinutoTermino);

    if(HoraInicio >= 0 && MinutoInicio >= 0 && HoraTermino >= 0 && MinutoTermino >= 0 && HoraInicio < 24 && HoraTermino < 24 && MinutoInicio < 60 && MinutoTermino < 60){

        TotalMinutos = MinutoTermino - MinutoInicio;
        TotalHoras = HoraTermino - HoraInicio;

        if(HoraTermino == HoraInicio && TotalMinutos < 0){
            TotalHoras = 23;
            TotalMinutos = 60 + TotalMinutos;
        }
        if(TotalMinutos < 0){
            TotalMinutos = 60 + TotalMinutos;
            TotalHoras--;
        }
        if(HoraTermino < HoraInicio){
            TotalHoras = 24 + TotalHoras;
        }
        if(HoraTermino == HoraInicio && MinutoInicio == MinutoTermino){
            TotalHoras = 24;
            TotalMinutos = 0;
        }

        if(TotalMinutos >= 0){
            if(TotalHoras <= 24){
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",TotalHoras,TotalMinutos);
            }
        }

    }
}
