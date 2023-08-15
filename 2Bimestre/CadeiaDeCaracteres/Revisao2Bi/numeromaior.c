#include <stdlib.h>
#include <stdio.h>

main(){
    float A,B;
    printf("Digite o valor de A\n");
    scanf("%f",&A);

    printf("\n Digite o valor de B: \n");
    scanf("%f", &B);

    if (A>B){
    printf("A eh maior que B");
        }else{
            printf ("B eh maior ou igual a A ");
    }
    return 0;
}