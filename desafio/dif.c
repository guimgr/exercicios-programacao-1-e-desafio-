#include <stdio.h>

int main() {

    int senha, senhainv, soma, multiptotal, digverificador;
    int temp;
    int centena, dezena, unidade;
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0;

    printf("Digite a senha de 3 digitos: ");
    scanf("%d", &senha);

    temp = senha;

    centena = (temp % 10) * 100;
    dezena = ((temp / 10) % 10) * 10;
    unidade = (temp / 100);

    senhainv = centena + dezena + unidade;

    soma = senha + senhainv;

    if (soma <= 999) {
        n1 = (soma / 100);
        n2 = (soma / 10) % 10;
        n3 = soma % 10;
        n4 = 0;  
    } 
    else { 
        n1 = (soma / 1000);
        n2 = (soma / 100) % 10;
        n3 = (soma / 10) % 10;
        n4 = soma % 10;
    }

    multiptotal = (n1 * 1) + (n2 * 2) + (n3 * 3) + (n4 * 4);

    digverificador = multiptotal % 10;

    printf("Digito verificador: %d\n", digverificador);

    return 0;
}
