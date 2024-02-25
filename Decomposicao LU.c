#include <stdio.h>

void main(){
    float a[10][10], l[10][10], u[10][10], b[10], y[10], x[10];
    int i, j, k, n;

    printf("Entre com o tamanho da matriz A: ");
    scanf("%d", &n);

    printf("Entre com os elementos da matriz A: ")
    for (i = 0, i<n, i++){
        for (j = 0, j<n, j++){
            scanf("%f", &a[i][j]);

        }
    }

    printf("Entre com os elementos da matriz B: ")
    for (i = 0, i<n, i++){
        scanf("%f", &b[i]);
    }

    //criando as matrizes L e U

    for (i = 0, i<n , i++){
        l[i][1] = a[i][1];   
    }
    for (j = 2, j <= n, j++){
        u[1][j] = a[1][j]/l[1][1];
        
    }
    for (i = 0,  i<n, i++){
        u[i][i] = 1;
    }
    for (i = 2, i <= n, i++){
        for (j = 2, j <= n , j++){
            if (i >= j){
                l[i][j] = a[i][j];
                for (k = 1, k <= j -1, k++){
                    l[i][j] -= l[i][j] * u[k][j]
                }
            }
            else{
                u[i][j] = a[i][j];
                for (k = 1, k <= j, k++){
                    u[i][j] -= l[i][k]*u[k][j];
                }
                u[i][j] /= 
            }

        }
    }

}