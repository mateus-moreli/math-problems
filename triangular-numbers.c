#include <stdio.h>

int main(){
    int i;
    float triangular;

    printf("Lista de numeros triangulares de 100 are 1000\n");

    for (i = 1; ;i++){//for loop sem condição de parada -> para quando encontrar um break dentro do bloco
        triangular = i*(i+1)/2;

        if (triangular > 1000){
            break;
        }

        if (triangular >= 100){
            printf("%.2f\n", triangular);
        }
    }

    return 0; 
}