#include <stdio.h>

int main(){
    char nome[1000];
    int cont = 0;
    printf("Digite a palavra: \n");
    scanf("%999s", nome);
    for (int x = 0; nome[x] != '\0'; x++){
        if (nome[x] == 'a'|| nome[x] == 'e' || nome[x] == 'i' || nome[x] == 'o' || nome[x] == 'u'){
            cont++;
        };
    };
    printf("%d", cont);
    return 0;
}