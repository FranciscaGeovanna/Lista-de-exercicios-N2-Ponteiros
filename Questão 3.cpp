/*Escreva um programa que declare duas variáveis inteiras e dois ponteiros para essas variáveis. Em seguida, preencha as variáveis com valores informados pelo usuário. 
Utilizando ponteiros, troque os valores entre as duas variáveis sem usar uma variável temporária e sem utilizar operadores de atribuição direta. Em seguida, 
imprima os valores atualizados das duas variáveis.
*/

#include <stdio.h>
#include <locale.h>

void troca(int *a, int *b){

		*a = *a + *b;
    	*b = *a - *b;
    	*a = *a - *b;
	}
	
	int main(){
	setlocale (LC_ALL, "portuguese_Brazil");		
		
		int num1, num2;
		
		printf("Digite dois números inteiros: ");
		scanf("%d %d", &num1, &num2);
		
		troca(&num1, &num2);
		
		printf("\nValores atualizados: num1 = %d, num2 = %d", num1, num2);
	
	return 0;
}