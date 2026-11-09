#include <stdio.h>

int main(){
    char palavras[1000];
    int cont = 0;
    printf("Insira os caracteres: \n");
    scanf("%999s", palavras);
    for (int x = 0; palavras[x] != '\0'; x++){
        cont++;
    };
    printf("%d", cont);
    return 0;
}