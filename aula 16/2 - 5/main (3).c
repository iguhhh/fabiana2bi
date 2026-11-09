#include <stdio.h>

int main(){
    char nome[1000];
    printf("Digite seu nome: \n");
    scanf("%999s", nome);
    printf("seu nome e: %s", nome);
    return 0;
}