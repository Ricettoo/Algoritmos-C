#include <stdio.h>
#include <string.h>

int main() {
    char musica[100]; // Espaço para armazenar o nome da música
    char caractere;
    
    printf("Nome da música: ");
    fgets(musica, sizeof(musica), stdin);
    
    printf("Caractere: ");
    scanf(" %c", &caractere);
    
    int i;
    int encontrou = 0; // Variável para verificar se o caractere foi encontrado
    
    for (i = 0; i < strlen(musica); i++) {
        if (musica[i] == caractere) {
            printf("Ocorrência de caractere na posição %d\n", i);
            encontrou = 1;
        }
    }
    
    if (!encontrou) {
        printf("Caractere nao encontrado.\n");
    }
    
    return 0;
}
