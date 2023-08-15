#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    printf("Frase: ");
    fgets(frase, sizeof(frase), stdin);

    int i;

    for (i = 0; frase[i] != '\0'; i++) {
        char c = tolower(frase[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            frase[i] = '*';
        }
    }

    printf("Saída: %s", frase);

    return 0;
}
