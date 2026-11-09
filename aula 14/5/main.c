#include <stdio.h>
int main(){
    int numeros[2][2]={
        {10, 20},
        {40, 50}
    };

    printf("%d ", numeros[0][0]);
    printf("%d\n", numeros[0][1]);
    printf("%d ", numeros[1][0]);
    printf("%d\n", numeros[1][1]);
    return 0;
};