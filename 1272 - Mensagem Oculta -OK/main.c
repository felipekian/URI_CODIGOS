#include <stdio.h>
#include <string.h>

int main() {
    int n;

    scanf("%d",&n);

    getchar();
    while(n--) {

        char msg[250];
        int i,j=0;

        gets(msg);
int l =0;


        for(i=0; i<strlen(msg); i++) {
                if(msg[0]!=' ' && l == 0){
                    printf("%c",msg[0]);
                    l++;
                }

            if(msg[i]==' ') {
                if(msg[i+1]!=' ' && msg[i+1]!='\0') {
                    printf("%c",msg[i+1]);
                    l++;
                }
            }

        }

        printf("\n");

    }

}
