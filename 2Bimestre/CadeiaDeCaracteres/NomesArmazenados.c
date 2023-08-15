#include <stdio.h>
#include <string.h>

int main() {
    char nomes[5][50];
    int i;

    printf("Digite o nome de 5 pessoas:\n");

    for (i = 0; i < 5; i++) {
        printf("Nome %d: ", i + 1);
        scanf("%s", nomes[i]);
    }

    printf("\nNomes armazenados:\n");

    for (i = 0; i < 5; i++) {
        printf("%s\n", nomes[i]);
    }

    return 0;
}
