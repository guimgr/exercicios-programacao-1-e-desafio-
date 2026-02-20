#include <stdio.h>
#include <math.h>
int main() {
float lquadr, pquadr, aquadr, dquadr, r2;

r2 = sqrt(2);

printf("Digite o valor do lado do quadrado: ");
scanf("%f", &lquadr);

pquadr = 4*lquadr;
aquadr = pow(lquadr, 2);
dquadr = r2*lquadr;

printf("O perimetro do quadrado e: %.3f\n", pquadr);
printf("A area do quadrado e: %.3f\n", aquadr); 
printf("A diagonal do quadrado e: %.3f\n", dquadr);

return 0;
}   