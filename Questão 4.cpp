/*Escreva um programa que solicite ao usuário que digite um número inteiro positivo n. Em seguida, crie um vetor dinamicamente alocado de tamanho n 
e preencha o vetor com valores inteiros informados pelo usuário. Em seguida, crie um ponteiro que aponte para o primeiro elemento do vetor e percorra o 
vetor utilizando esse ponteiro, imprimindo na tela os valores dos elementos do vetor em ordem inversa.*/

#include <stdio.h>
#include <locale.h>

int main(){
    setlocale (LC_ALL, "portuguese_Brazil");

    int n, vet[n];
    int *pont;
    
    printf("Digite um número: ");
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++){
        printf("Preencha o vetor: ");
        scanf("%d", &vet[i]);
    }
    
    pont = vet; 

    printf("Ordem inversa dos valores: ");

    for(int i = 0; i < n; i++){
        printf("%d ", *(pont + (n - 1 - i)));
    }

    return 0;
}
