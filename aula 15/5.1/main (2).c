#include <stdio.h>

int main()
{
    int numeros[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int maior = numeros[0][0];
    
    for (int x = 0; x < 3; x++){
        for (int i = 0; i < 3; i++){
            if (numeros[x][i] > maior){
                maior = numeros[x][i];
            }
        }
    }
    printf("%d", maior);
    return 0;
}