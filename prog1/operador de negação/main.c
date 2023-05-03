#include <stdio.h>

int main() {

    int resto, x, ehPar;
       
       scanf("%d", &x);

resto = (x%2);
ehPar = (resto == 0);

//negando o valor de ehPar

if (!ehPar) {

       printf("Impar\n");
}

return 0;

}