#include<stdio.h>
#include<stdlib.h>

int main() {
    int mamiferos, quadrupedes, bipedes, voadores, aquaticos, carnivoro, herbivoro, onivoro, frutiferos;
    int aves, nvoadoras, nadadoras, rapina, tropical, polar;
    int repteis, casco, repteiscarnivoros, sempatas;

    printf("AKINATOR ANIMAL\n");
    printf("Responda 1 para SIM e 0 para NAO\n");

    printf("O seu animal e um mamifero?\n");
    scanf("%d", &mamiferos);

    if (mamiferos == 1) {
        printf("O seu animal e um quadrupede?\n");
        scanf("%d", &quadrupedes);

        if (quadrupedes == 1) {
            printf("O seu animal e um carnivoro?\n");
            scanf("%d", &carnivoro);

            if (carnivoro == 1) {
                printf("O seu animal e o Leao.\n");
            }

            if (mamiferos == 1 && carnivoro == 0) {
                printf("O seu animal e um herbivoro?\n");
                scanf("%d", &herbivoro);

                if (herbivoro == 1) {
                    printf("O seu animal e um Cavalo.\n");
                }
            }
        }

        if (mamiferos == 1 && quadrupedes == 0) {
            printf("O seu animal e um onivoro?\n");
            scanf("%d", &onivoro);

            if (onivoro == 1) {
                printf("O seu animal e um Homem.\n");
            }

            if (onivoro == 0) {
                printf("O seu animal e um Frutifero?\n");
                scanf("%d", &frutiferos);

                if (frutiferos == 1) {
                    printf("O seu animal e um Macaco.\n");
                }

                if (frutiferos == 0) {
                    printf("O seu animal e um voador?\n");
                    scanf("%d", &voadores);

                    if (voadores == 1) {
                        printf("O seu animal e um Morcego.\n");
                    }

                    if (voadores == 0) {
                        printf("O seu animal e um Aquatico?\n");
                        scanf("%d", &aquaticos);

                        if (aquaticos == 1) {
                            printf("O seu animal e uma Baleia.\n");
                        }
                    }
                }
            }
        }
    }
    
         if (mamiferos == 0) {
            printf("O seu animal e uma Ave?\n");
            scanf("%d",&aves);
        

          if (mamiferos == 0 && aves == 1){
            printf("O seu animal nao voa?");
            scanf("%d",nvoadoras);
          if (nvoadoras == 1){
             printf("O seu animal e tropical?");
             scanf("%d",tropical);
             if (tropical==1){
                printf("O seu animal e um Avestruz.");
                if (tropical==0){
                    printf("O seu animal e Polar");
                    scanf("%d",polar);
                    if (polar==1){
                        printf("O seu animal e um Pinguim.");
                    }
                }
            }
        }
          if (nvoadoras==0){
            printf("O seu animal e um Nadador");
            scanf("%d",nadadoras);
            if (nadadoras==1){
                printf("O seu animal e um Pato.");
                if (nadadoras==0){
                    printf("O seu animal e uma ave de rapina?");
                    scanf("%d",rapina);
                    if (rapina==1){
                        printf("O seu animal e uma Aguia.");
                    }
                }
            }
          }
        }
    }
        if (aves == 0){
        printf("O seu animal e um reptil?\n");
        scanf("%d",&repteis);
    
      if (repteis==1){
       printf("O seu animal tem casco?");
       scanf("%d",&casco);
        if (casco==1){
        printf("O seu animal e uma Tartaruga.");
      }
      if (casco==0){
        printf("O seu animal e um carnivoro?");
        scanf("%d",&repteiscarnivoros);
        if (repteiscarnivoros==1){
            printf("O seu animal e um Crocodilo.");
            if (repteiscarnivoros==0){
                printf("O seu animal nao tem patas?");
                scanf("%d",&sempatas);
                if (sempatas==1){
                    printf("O seu animal e uma Cobra");
                }
            }
        }
      }
    }
  }
}   