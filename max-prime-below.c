#include <stdio.h>


int eh_primo(int n){
    int i;
    for (i = 2; i * i <= n; i++){
        if (n%i == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int num, aux = 1;
    printf("Entre com um numero inteiro: ");
    scanf("%d", &num);

    if (num == 2){
        printf("O maior numero primo menor que o digitado eh 1 \n");
    } 
    else if (num == 1){
        printf("Nao existe numero primo menor que 1. \n");
    }
    else{
        while (aux == 1 && num > 1){
            if (eh_primo(num)){
                printf("O maior numero primo menor que o digitado eh %d \n", num);
                aux = 0;
            }
            num--;
        }
    }
    
    return 0;
}