#include <stdio.h>
#include <math.h>  

int main() {
float rcirc, acirc, ccirc, pi; 

printf("Digite o raio do circulo: ");
scanf("%f", &rcirc);

pi = 3.14;

acirc = pi*(pow(rcirc, 2));

ccirc = 2*pi*rcirc;

printf("sera necessario %.2f metros quadrados de material\n", acirc);

printf("as bordas terao %.2f metros\n", ccirc);

    return 0;
}