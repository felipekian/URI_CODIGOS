#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
    char t[] = {"`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./"};
    char x[1000];
    int tamt = strlen(t);

    while(gets(x)){

        int tamx = strlen(x);

        for(int i=0; i<tamx; i++){
            if(x[i]!=' ')
                for(int j=0; j<tamt; j++){
                    if(x[i] == t[j]){
                        x[i] = t[j-1];
                        break;
                    }
                }
        }

        cout << x << endl;
    }

    return 0;
}
