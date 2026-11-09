#include <stdio.h>

int main(){
    char nome[1000];
    printf("Digite a palavra: \n");
    scanf("%999s", nome);
    printf("A primeira letra e: %c", nome[0]);
    return 0;
}