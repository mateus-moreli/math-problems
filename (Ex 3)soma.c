#include <stdio.h> 

int main(){
    int n, i;
    

    printf("Tamanho do vetor: ");
    scanf("%d ", &n);

    int seq1[n], seq2[n], resultado[n+1];

    for (i = 0; i < n; i++){ //pega os elementos da primeira sequencia
        scanf("%d", &seq1[i]);
    }
    for (i = 0; i < n; i++){ //pega os elementos da segunda sequencia 
        scanf("%d", &seq2[i]);
    }

    for (i = 0; i < n+1; i++){
        resultado[i] = seq1[i] + seq2[1];
    }
    
    for (i = 0; i < n+1; i++){
        printf("%d", resultado[i]);
    }


}