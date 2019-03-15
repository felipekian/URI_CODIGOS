#include <cstdio>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

#define ent(a) scanf("%d", &a)
#define fr(i, a, n) for(int i = (a); i < (n); i++)
#define fe(i, a, n) for(int i = (a); i <= (n); i++)

typedef stack<int> si;



int main(int argc, char const *argv[]){
	int i, cont, n, top;
    int Vet_tot[1005];
	while(ent(n) && n){
		while(ent(Vet_tot[0]) && Vet_tot[0]){
			fr(i, 1, n)
				ent(Vet_tot[i]);

			si p;
			cont = 0;

			fe(i, 1, n){
				p.push(i);

				while(p.size() > 0 && Vet_tot[cont] == p.top()){
					cont++;
					p.pop();
				}
			}
			if(p.size()==0){
                printf("Yes\n");
			}
			else{
                printf("No\n");
			}

		}
        printf("\n");
	}

	return 0;
}
