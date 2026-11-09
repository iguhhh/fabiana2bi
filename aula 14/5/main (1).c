#include <stdio.h>

int main()
{
    int numeros[2][2];
    
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            scanf("%d", &numeros[i][j]);
        }
    }
    
    for (int x = 0; x < 2; x ++){
        for (int y = 0; y < 2; y ++) {
            printf("%d ", numeros[x][y]);
        }
        printf("\n");
    }

    return 0;
}