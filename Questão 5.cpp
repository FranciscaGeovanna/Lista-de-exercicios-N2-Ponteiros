//Escreva um programa que declare uma variável real e um ponteiro para essa variável. Em seguida, preencha a variável com um valor real informado pelo usuário e utilize o
// ponteiro para calcular o dobro desse valor. Por fim, utilize o ponteiro para imprimir na tela o valor original e o dobro calculado.


#include <stdio.h>

int main(){
	float n;
	float *ponteiro;
	
	printf ("Programa para calcular dobro\n\n");
	
	printf ("Digite um valor: ");
	scanf ("%f", &n);
	
	ponteiro = &n;
	
	printf ("Valor original: %.2f\n", *ponteiro);
	printf ("Dobro do valor: %.2f", (*ponteiro) * 2);
	
	return 0;
}