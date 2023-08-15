#include <stdio.h>

int main() {
    int i, idade, peso;
    float altura, media_idades, porc_idade_10_30 = 0;
    int cont_peso_maior_90_alt_menor_150 = 0;
    int cont_pessoas_maior_190 = 0;

    for (i = 0; i < 10; i++) {
        printf("Digite idade, peso (em kg) e altura (em metros) da pessoa %d: ", i + 1);
        scanf("%d %d %f", &idade, &peso, &altura);

        media_idades += idade;

        if (peso > 90 && altura < 1.50) {
            cont_peso_maior_90_alt_menor_150++;
        }

        if (idade >= 10 && idade <= 30 && altura > 1.90) {
            cont_pessoas_maior_190++;

            porc_idade_10_30 = ((float)cont_pessoas_maior_190 / (i + 1)) * 100;
        }
    }

    media_idades /= 10;

    printf("\n");
    printf("Média das idades: %.2f\n", media_idades);
    printf("Quantidade de pessoas com peso > 90kg e altura < 1,50m: %d\n", cont_peso_maior_90_alt_menor_150);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos e altura > 1,90m: %.2f%%\n", porc_idade_10_30);

    return 0;
}
