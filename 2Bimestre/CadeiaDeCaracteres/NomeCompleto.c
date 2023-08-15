#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    printf("Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Saída: ");
    printf("%c", nome[0]); // Imprime o primeiro caractere do primeiro nome

    for (int i = 1; i < strlen(nome); i++) {
        if (nome[i - 1] == ' ' && nome[i] != ' ' && nome[i] != '\n') {
            printf("%c. ", nome[i]); // Imprime o caractere seguido de ponto e espaço
        }
    }

    printf("\n");

    return 0;
}
