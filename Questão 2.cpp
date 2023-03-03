//Escreva um programa que solicite ao usuário que digite uma string e, em seguida, crie uma nova string que seja a cópia da string original, mas com todas as vogais removidas.
// O programa deve usar ponteiros para manipular as strings.

#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil");

    char string[250], stringSV[250];
    char *pont;
    int tam = 0;

    printf("Digite uma palavra ou frase: ");
    fgets(string, 250, stdin);

    pont = string;
    
    for(int i = 0; *(pont + i) != '\0'; i++) {
        if(*(pont + i) != 'a' && *(pont + i) != 'e' && *(pont + i) != 'i' && *(pont + i) != 'o' && *(pont + i) != 'u') {
            stringSV[tam] = *(pont + i); 
            tam++;
        }
    }

    printf("Palavra sem vogais: %s", stringSV);

    return 0;
}
