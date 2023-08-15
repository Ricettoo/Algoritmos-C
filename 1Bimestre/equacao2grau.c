#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, delta, x1, x2;
    printf("Digite o valor de A: ");
    scanf("%lf", &a);
    printf("Digite o valor de B: ");
    scanf("%lf", &b);
    printf("Digite o valor de C: ");
    scanf("%lf", &c);

    delta = pow(b, 2) - 4 * a * c;

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raizes da equacao sao: x1 = %.2lf e x2 = %.2lf\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("A unica raiz da equacao eh: x1 = %.2lf\n", x1);
    } else {
        printf("Essa equacao nao possui raizes reais.\n");
    }

    return 0;
}
