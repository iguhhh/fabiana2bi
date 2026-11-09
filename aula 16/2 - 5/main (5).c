#include <stdio.h>

int main(){
    char nome[1000];
    printf("Digite a palavra: \n");
    scanf("%999s", nome);
    for (int x = 0; nome[x] != '\0'; x++){
        printf("%c ", nome[x]);
    }
    return 0;
}