#include <stdlib.h>
#include <stdio.h>

int main() {
    float x, y, z;
    printf("Informe as notas:\n");
    scanf("%f", &x);
    scanf("%f", &y);
    scanf("%f", &z);

    printf("\nInforme os pesos:\n");
    float a, b, c;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    float Re = (x * a + y * b + z * c) / (a + b + c);

    printf("A média ponderada foi de %.2f", Re);

    return 0;
}
