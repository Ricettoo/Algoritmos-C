#include <stdio.h>
#include <math.h>

int main() {
    float cache, preco_ingresso;
    int quantidade_convites;

    scanf("%f", &cache);
    scanf("%f", &preco_ingresso);

    quantidade_convites = ceil(cache / preco_ingresso);

    printf("%d\n", quantidade_convites);

    return 0;
}
