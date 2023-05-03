#include <stdio.h>

int main() {

    float notaB1, notaB2, notaB3, notaB4, media;

        printf("Digite as notas: \n");
        scanf("%f%f%f%f", &notaB1, &notaB2, &notaB3, &notaB4);

    media = (notaB1 + notaB2 + notaB3 + notaB4) / 4;

         printf("Media final: %.2f\n", media);

     if (media >= 7);   {

        printf("Aprovado \n");

     }

     else if (media >=4 && media <7) {

        printf("Exame");
     }

    else { 

        printf("Reprovado \n");
    
     }  

     return 0;

}