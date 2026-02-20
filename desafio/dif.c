#include <stdio.h>
#include <math.h>  
int main() {

    int senha, senhainv, digverif, soma, multiptotal;

    printf("Digite a senha de 3 digitos:");
    scanf("%d", &senha);

    if (senha >= 0);
    do {
        senhainv = senha %10;
        printf ("%d", senhainv);
        senha /= 10;
    } while (senha != 0);
    
    return 0;
} 