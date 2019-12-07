#include <stdio.h>
#include <stdlib.h>

int main(){

    char vet_FACE[99999] = { 'F', 'A', 'C', 'E' };


	char L1[2], L2[2], L3[2], L4[2];
	int Tot_vezes, i, p = 0, c = 4;
    scanf("%d", &Tot_vezes);
	while(Tot_vezes != 0){
		scanf("%s %s %s %s", L1, L2, L3, L4);
		if (L1[0] == vet_FACE[c-1] && L2[0] == vet_FACE[c-2] && L3[0] == vet_FACE[c-3] && L4[0] == vet_FACE[c-4]){
			c -= 4;
			if (c == 0)
				vet_FACE[0] = 'F', vet_FACE[1] = 'A', vet_FACE[2] = 'C', vet_FACE[3] = 'E', c = 4;
			p++;
		}
		else {
			vet_FACE[c] = L1[0], c++, vet_FACE[c] = L2[0], c++, vet_FACE[c] = L3[0], c++, vet_FACE[c] = L4[0], c++;
		}
		Tot_vezes--;
	}
	printf("%d\n", p);

	return 0;
}
