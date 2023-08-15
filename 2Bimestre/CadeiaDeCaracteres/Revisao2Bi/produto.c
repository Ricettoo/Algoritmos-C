#include <stdlib.h>
#include <stdio.h>

main(){
    int cod;
    printf("digite o codigo do produto\n");
    scanf("%d",&cod);

    if(cod==1){
        printf("Procedencia:Norte");
    }if(cod==2){
        printf("Procedencia:Nordeste");
    }if(cod==3){
        printf("Procedencia:Sudeste");
    }if(cod==4){
        printf("Procedencia:Sul");
    }if(cod==5){
        printf("Procedencia:Centro-Oeste");
    }else{
        printf("Codigo invalido!");
    }
    return 0;
}