#include <stdlib.h>
#include <stdio.h>

int main() {
    float salario, aumento;
    printf("Informe o salário: ");
    scanf("%f", &salario);
    printf("Informe o aumento em porcentagem: ");
    scanf("%f", &aumento);

    aumento /= 100;
    float novoSalario = salario * (1 + aumento);

    printf("O novo salario e de: %.2f\n", novoSalario);

    return 0;
}
