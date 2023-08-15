#include <stdio.h>

int main() {
    float nota1, nota2, nota3;
    float media;

    // Entrada das três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3.0;

    printf("Média: %.2f\n", media);

    if (media >= 0.0 && media < 3.0) {
        printf("Reprovado!\n");
    } else if (media >= 3.0 && media < 7.0) {
        float nota_exame = 12.0 - media;
        printf("Exame + nota a ser tirada no exame: %.2f\n", nota_exame);
    } else if (media >= 7.0 && media <= 10.0) {
        printf("Aprovado!\n");
    } else {
        printf("Média inválida!\n");
    }

    return 0;
}
