#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int i, contador = 0;

    for (i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]); // Converte para minúscula para comparar
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            contador++;
        }
    }

    printf("Quantidade de vogais: %d\n", contador);

    return 0;
}
    