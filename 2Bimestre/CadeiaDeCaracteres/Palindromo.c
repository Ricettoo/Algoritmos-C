#include <stdio.h>
#include <string.h>

int main() {
    char palavra[100];
    printf("Palavra: ");
    scanf("%s", palavra);

    int tamanho = strlen(palavra);
    int palindromo = 1; // Variável para verificar se é um palíndromo

    for (int i = 0; i < tamanho / 2; i++) {
        if (palavra[i] != palavra[tamanho - 1 - i]) {
            palindromo = 0; // Se os caracteres não coincidirem, não é palíndromo
            break;
        }
    }

    if (palindromo) {
        printf("A palavra é um palíndromo.\n");
    } else {
        printf("A palavra não é um palíndromo.\n");
    }

    return 0;
}
