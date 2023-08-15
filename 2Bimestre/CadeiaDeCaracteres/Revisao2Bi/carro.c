#include <stdio.h>

int main() {
    float valor_carro;
    int num_parcelas;
    float desconto_avista = 0.05;
    float acrescimo_parcelas[4] = {0.06, 0.12, 0.24, 0.30};

    printf("Digite o valor do carro: ");
    scanf("%f", &valor_carro);

    float preco_final_avista = valor_carro - (valor_carro * desconto_avista);
    printf("Preço final à vista: R$ %.2f\n", preco_final_avista);

    printf("Digite a quantidade de parcelas (12, 24, 48 ou 60): ");
    scanf("%d", &num_parcelas);

    if (num_parcelas != 12 && num_parcelas != 24 && num_parcelas != 48 && num_parcelas != 60){
        printf("Quantidade de parcelas inválida!\n");
    } else {
        float acrescimo = valor_carro * acrescimo_parcelas[num_parcelas / 12 - 1];
        float preco_final_parcelas = valor_carro + acrescimo;
        float valor_parcela = preco_final_parcelas / num_parcelas;

        printf("Preço final parcelado: R$ %.2f\n", preco_final_parcelas);
        printf("Quantidade de parcelas: %d\n", num_parcelas);
        printf("Valor de cada parcela: R$ %.2f\n", valor_parcela);
    }

    return 0;
}
