#include <stdio.h>

int main() {

    int x, y; // x - homem, y - mulher

//le a idade do casal
       scanf("%d%d", &x, &y);

//regra de desconto

    if(x % 2 == 1 && y % 2 == 1) {

        printf("\nDesconto concedido \n");

    }

    return 0;

}