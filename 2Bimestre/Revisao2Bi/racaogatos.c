#include <stdio.h>

int main() {
    float peso, gato1, gato2;
    
    printf("Digite o peso do saco de ração (em quilos): ");
    scanf("%f", &peso);

    printf("Digite a quantidade de ração fornecida para o gato 1 (em gramas): ");
    scanf("%f", &gato1);

    printf("Digite a quantidade de ração fornecida para o gato 2 (em gramas): ");
    scanf("%f", &gato2);

    float peso_gramas = peso * 1000;
    float racao_consumida_3_dias = 3 * (gato1 + gato2);
    float restante_racao_gramas = peso_gramas - racao_consumida_3_dias;

    printf("Após 3 dias, restará %.2f gramas de ração no saco.\n", restante_racao_gramas);

    return 0;
}
