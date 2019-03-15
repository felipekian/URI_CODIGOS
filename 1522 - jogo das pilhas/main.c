#include <stdio.h>
#include <stdlib.h>
#define MAX_TAM 500

int Pilha_A[MAX_TAM], Pilha_B[MAX_TAM], Pilha_C[MAX_TAM];
int Topo_A, Topo_B,Topo_C;
int Max_A=0,Max_B=0,Max_C=0;
int AAA, BBB , CCC;


void Pilha_Construtor(){
    Topo_A = -1;
    Topo_B = -1;
    Topo_C = -1;
    Max_A = 0;
    Max_B = 0;
    Max_C = 0;
}

int Pilha_Vazia_A(){
    if(Topo_A == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int Pilha_Vazia_B(){
    if(Topo_B == -1){
        return 1;
    }
    else{
        return 0;
    }
}
int Pilha_Vazia_C(){
    if(Topo_C == -1){
        return 1;
    }else{
        return 0;
    }
}

int Pilha_Cheia_A(){
    if(AAA==Max_A){
        return 1;
    }else{
        return 0;
    }
}
int Pilha_Cheia_B(){
    if(BBB == Max_B){
        return 1;
    }else{
        return 0;
    }
}
int Pilha_Cheia_C(){
    if(CCC == Max_C){
        return 1;
    }else{
        return 0;
    }
}

void Empilha_A (int a){
    if(Pilha_Cheia_A()==0){
        Topo_A++;
        Pilha_A[Topo_A] = a;
    }else{
        printf("Pilha Cheia!\n");
    }
}

void Empilha_B(int b){
    if(Pilha_Cheia_B()==0){
        Topo_B++;
        Pilha_B[Topo_B] = b;
    }else{
        printf("Pilha Cheia!\n");
    }
}


void Empilha_C(int c){
    if(Pilha_Cheia_C()==0){
        Topo_C++;
        Pilha_C[Topo_C] = c;
    }else{
        printf("Pilha Cheia!\n");
    }

}
int Desempilha_A(){
    int des =0;
    des = Pilha_A[AAA];
    AAA++;
    return des;
}

int Desempilha_B(){
    int des = 0;
    des = Pilha_B[BBB];
    BBB++;
    return des;
}

int Desempilha_C(){
    int des =0;
    des = Pilha_C[CCC];
    CCC++;
    return des;
}

int Mostra_A(){
    int des =0;
    des = Pilha_A[AAA];
    return des;
}

int Mostra_B(){
    int des = 0;
    des = Pilha_B[BBB];
    return des;
}

int Mostra_C(){
    int des =0;
    des = Pilha_C[CCC];
    return des;
}
void chama (){
    AAA = 0;
    BBB = 0;
    CCC = 0;
}
void TAm_maximo(int n){
    Max_A = n;
    Max_B = n;
    Max_C = n;

}

void Libera_pilha(){
    Topo_A = -1;
    Topo_B = -1;
    Topo_C = -1;
    Max_A = 0;
    Max_B = 0;
    Max_C = 0;
}




int main(){
    int n;

    while(scanf("%d",&n)&& n!=0){
            setbuf(stdin,NULL);
        Pilha_Construtor();
        chama();
        TAm_maximo(n);

        int i , a=0 , b=0, c=0;

        for(i=0;i<n;i++){
            scanf("%d %d %d",&a,&b,&c);
            Empilha_A(a);
            Empilha_B(b);
            Empilha_C(c);
        }
        int controle = 0;

                a = 0;
                b = 0;
                c = 0;
            a = Mostra_A();
            b = Mostra_B();
            c = Mostra_C();
            chama();
        if((a+b+c)% 3 == 0 && a!=0 && b!=0 && c!=0){
              //  printf("Entrei---1\n\n");
                chama();
                while(Pilha_Cheia_A()!=1 && Pilha_Cheia_B()!=1 && Pilha_Cheia_C()!=1){

                if(((a+b+c) % 3 == 0 && a!=0 && b!=0 && c!=0)){
                   // printf("A+b+C %d %d %d\n\n",a,b,c);
                     Desempilha_A();
                     Desempilha_B();
                     Desempilha_C();

                }
                else if((a+b) % 3 == 0 && a!=0 && b!=0 ){
                    //    printf("A+b %d %d\n\n",a,b);
                    Desempilha_A();
                    Desempilha_B();

                }
                else if((a+c) % 3 == 0 && a!=0 && c!=0){
                   //     printf("A+C %d %d \n\n",a,c);
                    Desempilha_A();
                    Desempilha_C();

                }
                else if((b+c) % 3 == 0 && c!=0 && b!=0){
                   //     printf("b+C %d %d \n\n",b,c);
                    Desempilha_B();
                    Desempilha_C();

                }
                else if(a % 3 == 0 && a!=0){
                //        printf("A %d\n\n",a);
                    Desempilha_A();
                }
                else if(b % 3 == 0 && b!=0){
                 //       printf("b %d\n\n",b);
                    Desempilha_B();
                }
                else if(c % 3 == 0 && c!=0){
                  //      printf("C %d\n\n",c);
                    Desempilha_C();
                }
                }
                if(Pilha_Cheia_A()==1 || Pilha_Cheia_B()==1 || Pilha_Cheia_C()==1){
                    printf("1\n");
                    continue;
                }

        }
         if( ((a+b)%3 == 0 && a!=0 && b!=0 )|| ((b+c)%3==0 && b!=0 && c!=0 )|| ((a+c)%3==0 && a!=0 && c!=0 )){
          //  printf("Entrei---2\n\n");
                  chama();
                  while( Pilha_Cheia_A()!=1 && Pilha_Cheia_B()!=1 && Pilha_Cheia_C()!=1){

                if(((a+b+c) % 3 == 0 && a!=0 && b!=0 && c!=0)){
                   // printf("A+b+C %d %d %d\n\n",a,b,c);
                     Desempilha_A();
                     Desempilha_B();
                     Desempilha_C();

                }
                else if((a+b) % 3 == 0 && a!=0 && b!=0 ){
                    //    printf("A+b %d %d\n\n",a,b);
                    Desempilha_A();
                    Desempilha_B();

                }
                else if((a+c) % 3 == 0 && a!=0 && c!=0){
                   //     printf("A+C %d %d \n\n",a,c);
                    Desempilha_A();
                    Desempilha_C();

                }
                else if((b+c) % 3 == 0 && c!=0 && b!=0){
                   //     printf("b+C %d %d \n\n",b,c);
                    Desempilha_B();
                    Desempilha_C();

                }
                else if(a % 3 == 0 && a!=0){
                //        printf("A %d\n\n",a);
                    Desempilha_A();
                }
                else if(b % 3 == 0 && b!=0){
                 //       printf("b %d\n\n",b);
                    Desempilha_B();
                }
                else if(c % 3 == 0 && c!=0){
                  //      printf("C %d\n\n",c);
                    Desempilha_C();
                }
                }
                if(Pilha_Cheia_A()==1 || Pilha_Cheia_B()==1 || Pilha_Cheia_C()==1){
                    printf("1\n");
                    continue;
                }
        }
         if( (a!=0 && a%3==0) || (b!=0 && b%3==0) || (c!=0 && c%3==0) ){
           // printf("Entrei---3\n\n");
            chama();
            while(Pilha_Cheia_A()!=1 && Pilha_Cheia_B()!=1 && Pilha_Cheia_C()!=1){

                if(((a+b+c) % 3 == 0 && a!=0 && b!=0 && c!=0)){
                   // printf("A+b+C %d %d %d\n\n",a,b,c);
                     Desempilha_A();
                     Desempilha_B();
                     Desempilha_C();

                }
                else if((a+b) % 3 == 0 && a!=0 && b!=0 ){
                    //    printf("A+b %d %d\n\n",a,b);
                    Desempilha_A();
                    Desempilha_B();

                }
                else if((a+c) % 3 == 0 && a!=0 && c!=0){
                   //     printf("A+C %d %d \n\n",a,c);
                    Desempilha_A();
                    Desempilha_C();

                }
                else if((b+c) % 3 == 0 && c!=0 && b!=0){
                   //     printf("b+C %d %d \n\n",b,c);
                    Desempilha_B();
                    Desempilha_C();

                }
                else if(a % 3 == 0 && a!=0){
                //        printf("A %d\n\n",a);
                    Desempilha_A();
                }
                else if(b % 3 == 0 && b!=0){
                 //       printf("b %d\n\n",b);
                    Desempilha_B();
                }
                else if(c % 3 == 0 && c!=0){
                  //      printf("C %d\n\n",c);
                    Desempilha_C();
                }
                }
                if(Pilha_Cheia_A()==1 || Pilha_Cheia_B()==1 || Pilha_Cheia_C()==1){
                    printf("1\n");
                    continue;
                }
        }else{
            printf("0\n");
        }
        Libera_pilha();
    }

    return 0;
}
