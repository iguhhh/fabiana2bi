#include <stdio.h>

int main()
{
    int numeros[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int contador = 0;
    
    for (int x = 0; x < 3; x++){
        for (int i = 0; i < 3; i++){
            if (numeros[x][i] % 2 == 0){
                contador++;
            }
        }
    }
    printf("%d", contador);
    return 0;
}