/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usuário e imprima esses valores utilizando o ponteiro. Ao final, 
mostre em tela cada valor armazenado e seu respectivo endereço de memória*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int vet[5];
	int *pont;
	
	for (int i = 0; i < 5; i++){
        printf ("Digite um número: ");
        scanf ("%d", &vet[i]);
    }
    printf ("\n");
    
    pont = vet;
    
    for(int ii = 0; ii < 5; ii++){
    	printf("Valor informado: %d\n", *(pont + ii));
    	printf("Endereço de memória: %p\n", pont + ii);
	}
    
	return 0;
}
