/*Escreva um programa que declare um array de inteiros com 5 elementos e um ponteiro para o primeiro elemento do array. 
Em seguida, preencha o array com valores informados pelo usu�rio e imprima esses valores utilizando o ponteiro. Ao final, 
mostre em tela cada valor armazenado e seu respectivo endere�o de mem�ria*/

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale (LC_ALL, "portuguese_Brazil");
	
	int vet[5];
	int *pont;
	
	for (int i = 0; i < 5; i++){
        printf ("Digite um n�mero: ");
        scanf ("%d", &vet[i]);
    }
    printf ("\n");
    
    pont = vet;
    
    for(int ii = 0; ii < 5; ii++){
    	printf("Valor informado: %d\n", *(pont + ii));
    	printf("Endere�o de mem�ria: %p\n", pont + ii);
	}
    
	return 0;
}
